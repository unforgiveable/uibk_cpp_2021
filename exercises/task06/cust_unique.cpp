#include <cstdlib>

struct Vec2
{
    float x, y;
};


struct unique_ptr_to_vec2
{
    public:
        unique_ptr_to_vec2(float x, float y) 
        {
            vector = (Vec2*) malloc(sizeof(Vec2));
            vector->x = x;
            vector->y = y;
        }
        
        // remove copy constructor
        unique_ptr_to_vec2(const unique_ptr_to_vec2& from) = delete;
        // remove copy assignment operator
        unique_ptr_to_vec2 operator=(const unique_ptr_to_vec2& from) = delete;
        
        // move constructor
        unique_ptr_to_vec2(unique_ptr_to_vec2&& from)
        {
            //self-move
            if (vector == from.vector)
                return;
            
            vector = from.vector;
            from.vector = nullptr;
        }
        // move assignment operator
        unique_ptr_to_vec2 operator=(unique_ptr_to_vec2&& from)
        {
            //self-move
            if (vector == from.vector)
                return;
            
            vector = from.vector;
            from.vector = nullptr;
        }
        
        // deref operator overload
        Vec2 operator*() const
        {
            return *vector;
        }
        // class memeber access op overload
        Vec2 operator->() const
        {
            return *vector;
        }
        
        // destructor
        ~unique_ptr_to_vec2()
        {
            if (vector != nullptr)
                free(vector);
        }
        
        Vec2* vector;
};



int main()
{
    
}