#include<iostream>
#include<set>
#include<vector>
bool ContainsDuplicate(const std::vector<int> &nums){
    return std::set<int>(nums.begin(),nums.end()).size() != nums.size();
}
int main(){
    int n1;
    int n2;
    // vector1
    std::cout<<"Nhap so luong phan tu v1";
    std::cin>>n1;
    std::vector<int> v1(n1);
    std::cout<<"nhap cac phan tu v1";
    for (int i = 0;i<n1;i++){
        std::cin>>v1[i];
    }
    // vector 2;
    std::cout<<"Nhap so luong phan tu v2";
    std::cin>>n2;
    std::vector<int> v2(n2);
    std::cout<<"Nhap so luong phan tu v2 ";
    for (int i = 0;i<n2;i++){
        std::cin>>v2[i];
    }
    std::cout<<"Vector v1 co phan tu trung: "<<(ContainsDuplicate(v1) ? "YES" : "No")<<std::endl;
    std::cout<<"Vector v2 co phan tu trung: "<<(ContainsDuplicate(v2) ? "YES" : "No")<<std::endl;
    return 0;
}