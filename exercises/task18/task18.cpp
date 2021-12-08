#include <cstdlib>
#include <iostream>
#include <ostream>
#include <array>


template <std::size_t N>
class Vector {
  public:
    Vector()
    {
        data.fill(0);
    }
    
    Vector(const double values[N])
    {
        for (std::size_t i = 0; i < N; i++)
            data[i] = values[i];
    }
    
    
    double operator[](int idx)
    {
        return data[idx];
    }
    
    

  private:
    std::array<double, N> data;
};

template<std::size_t N>
std::ostream& operator<<(std::ostream& stream, Vector<N> vec)
{
    stream << "[";
    for (std::size_t i = 0; i < N; i++)
    {
        stream << vec[i] << ",";
    }
    return stream << "]";
}

int main()
{
    Vector<4> vec4;
    std::cout << vec4 << std::endl;
    
    double values[] = {1,2,3};
    Vector<3> vec3(values);
    std::cout << vec3 << std::endl;
    
    Vector<5> vec5(values);
    std::cout << vec5 << std::endl;
}