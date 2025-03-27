template <class T>
void Swap (T &, T &);   // template prototype

struct job
{
    char name[40];
    double salary;
    int floor;
};

template <> void Swap<job>(job &, job &);   // explicit spacialization for job // job 的显式具体化

int main(void)
{
    // template void Swap<char>(char &, char &);   // explicit instantiation for char // char 的显示实例化

    short a, b;
    Swap(a, b); // implicit template instantiation for short // short 的隐式模板实例化

    job n, m;
    Swap(n, m); // use explicit specialization for job // 使用job的显示具体化

    char g, h;
    Swap(g, h); // use explicit template instantiation for char // 使用char的隐式模板实例化
}