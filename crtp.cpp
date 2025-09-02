// Base shape of CRTP

template <typename Derived>
class Shape {
    public:
        double area() const {
            static_cast<const Derived*>(this)->area_impl();
        }
};

class Circle : public Shape<Circle> {
    double radius;
    public:
    
}