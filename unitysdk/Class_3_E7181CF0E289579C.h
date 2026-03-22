#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_E7181CF0E289579C_METHOD_3_3869AF26AA253083_OFFSET UNITYSDK_OFFSET(0x9157790)
#define CLASS_3_E7181CF0E289579C_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x9157700)
#define CLASS_3_E7181CF0E289579C_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9157C10)
#define CLASS_3_E7181CF0E289579C_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x9157420)
#define CLASS_3_E7181CF0E289579C__CTOR_OFFSET UNITYSDK_OFFSET(0x9157A70)

inline static constexpr unsigned int Class_3_E7181CF0E289579C_TypeDefinitionIndex = 50651;

class Class_3_E7181CF0E289579C : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_3_B537A0AA78803363* Field_3_4; // 0x20
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_1; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_3_3; // 0x30
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_2; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7181CF0E289579C__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7181CF0E289579C_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_E7181CF0E289579C_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E7181CF0E289579C_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_3_3869AF26AA253083(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_E7181CF0E289579C_METHOD_3_3869AF26AA253083_OFFSET))(this, a1);
	}
};
