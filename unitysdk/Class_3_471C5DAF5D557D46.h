#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_8FBDD7D8E0EE0B49;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace MoleMole::Battle { class Entity; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_471C5DAF5D557D46_METHOD_3_0FD0EC313FAAB75A_OFFSET UNITYSDK_OFFSET(0x9548390)
#define CLASS_3_471C5DAF5D557D46_METHOD_3_7680878B5D79126A_OFFSET UNITYSDK_OFFSET(0x9548C10)
#define CLASS_3_471C5DAF5D557D46_METHOD_3_C43DD7AFEEA2B827_OFFSET UNITYSDK_OFFSET(0x9548700)
#define CLASS_3_471C5DAF5D557D46_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9548F70)
#define CLASS_3_471C5DAF5D557D46__CTOR_OFFSET UNITYSDK_OFFSET(0x9548D90)

inline static constexpr unsigned int Class_3_471C5DAF5D557D46_TypeDefinitionIndex = 40491;

class Class_3_471C5DAF5D557D46 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_3_2; // 0x18
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x20
	::Class_4_179456445C225AB4<::System::String*>* Field_3_4; // 0x28
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x30
	::Class_3_B537A0AA78803363* Field_3_5; // 0x38
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_0FD0EC313FAAB75A()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46_METHOD_3_0FD0EC313FAAB75A_OFFSET))(this);
	}

	::System::Void Method_3_C43DD7AFEEA2B827(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46_METHOD_3_C43DD7AFEEA2B827_OFFSET))(this, a1);
	}

	static ::System::Void Method_3_7680878B5D79126A(::MoleMole::Battle::Entity* a1, ::Class_1_8FBDD7D8E0EE0B49* a2, ::System::String* a3, ::System::String* a4)
	{
		return ((::System::Void(*)(::MoleMole::Battle::Entity*, ::Class_1_8FBDD7D8E0EE0B49*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46_METHOD_3_7680878B5D79126A_OFFSET))(a1, a2, a3, a4);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_471C5DAF5D557D46_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
