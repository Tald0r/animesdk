#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_3B7CFC169AD8410C.h"
#include "unitysdk/Struct_2_0B8A00E6770FCC03.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_2_99A6B66ACB90C91B;
class Class_3_CF43FA1E89397A1C;
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_694C8BAFF996B62F_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x91CC890)
#define CLASS_4_694C8BAFF996B62F_METHOD_4_33FF5384FC72783E_OFFSET UNITYSDK_OFFSET(0x91CCF90)
#define CLASS_4_694C8BAFF996B62F_METHOD_4_A172B2FCE524DF8B_OFFSET UNITYSDK_OFFSET(0x91CCD30)
#define CLASS_4_694C8BAFF996B62F_METHOD_4_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x91CD0C0)
#define CLASS_4_694C8BAFF996B62F_METHOD_4_DC6D8E185D41995D_OFFSET UNITYSDK_OFFSET(0x91CCBC0)
#define CLASS_4_694C8BAFF996B62F_METHOD_4_EB5BAD6F7BB892F4_OFFSET UNITYSDK_OFFSET(0x91CCA70)
#define CLASS_4_694C8BAFF996B62F__CCTOR_OFFSET UNITYSDK_OFFSET(0x91CCF80)
#define CLASS_4_694C8BAFF996B62F__CTOR_OFFSET UNITYSDK_OFFSET(0x91CCE10)

inline static constexpr unsigned int Class_4_694C8BAFF996B62F_TypeDefinitionIndex = 42667;

class Class_4_694C8BAFF996B62F : public ::Class_3_3B7CFC169AD8410C
{
public:
	static ::System::Int32* StaticGet_Field_4_3()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_4_694C8BAFF996B62F_TypeDefinitionIndex)->GetStaticField(0xB1D0);
	}
	::Class_3_CF43FA1E89397A1C* Field_4_2; // 0x18
	::Class_4_179456445C225AB4<::System::Int32>* Field_4_0; // 0x20
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_4_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_694C8BAFF996B62F__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_4_694C8BAFF996B62F__CCTOR_OFFSET))();
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_694C8BAFF996B62F_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_EB5BAD6F7BB892F4(::Class_2_99A6B66ACB90C91B* a1, ::Struct_2_FE667B282E242C72& a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_99A6B66ACB90C91B*, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_694C8BAFF996B62F_METHOD_4_EB5BAD6F7BB892F4_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_DC6D8E185D41995D(::Struct_2_FE667B282E242C72& a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_694C8BAFF996B62F_METHOD_4_DC6D8E185D41995D_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_4_33FF5384FC72783E(::Struct_2_FE667B282E242C72 a1, ::Struct_2_0B8A00E6770FCC03 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72, ::Struct_2_0B8A00E6770FCC03))((::PBYTE)hIl2Cpp + CLASS_4_694C8BAFF996B62F_METHOD_4_33FF5384FC72783E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_4_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_694C8BAFF996B62F_METHOD_4_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerator_1<::System::Single>* Method_4_A172B2FCE524DF8B(::Struct_2_FE667B282E242C72 a1, ::System::Int32 a2)
	{
		return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Struct_2_FE667B282E242C72, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_4_694C8BAFF996B62F_METHOD_4_A172B2FCE524DF8B_OFFSET))(this, a1, a2);
	}
};
