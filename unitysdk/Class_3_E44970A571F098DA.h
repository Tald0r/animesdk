#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_1_204C453CC79AE4E0_2;
class Class_3_B537A0AA78803363;
class Class_3_DCB7F8B839F0C44B_4;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_3_E44970A571F098DA_METHOD_3_24AD3B57ADC65069_OFFSET UNITYSDK_OFFSET(0x9B64440)
#define CLASS_3_E44970A571F098DA_METHOD_3_3F0F9592A0E917D4_OFFSET UNITYSDK_OFFSET(0x9B643B0)
#define CLASS_3_E44970A571F098DA_METHOD_3_4EC0B6C9D65287A8_OFFSET UNITYSDK_OFFSET(0x9B64EE0)
#define CLASS_3_E44970A571F098DA_METHOD_3_972E2881A37C9266_OFFSET UNITYSDK_OFFSET(0x9B649D0)
#define CLASS_3_E44970A571F098DA_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x9B65420)
#define CLASS_3_E44970A571F098DA_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x9B640D0)
#define CLASS_3_E44970A571F098DA__CTOR_OFFSET UNITYSDK_OFFSET(0x9B64830)

inline static constexpr unsigned int Class_3_E44970A571F098DA_TypeDefinitionIndex = 69625;

class Class_3_E44970A571F098DA : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_3_DCB7F8B839F0C44B_4* Field_3_0; // 0x18
	::Class_4_179456445C225AB4<::Foundation::ViewObject::ViewObjectHandle>* Field_3_3; // 0x20
	::Class_4_179456445C225AB4<::System::String*>* Field_3_1; // 0x28
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::System::String*>*>* Field_3_2; // 0x30
	::Class_3_B537A0AA78803363* Field_3_4; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E44970A571F098DA__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E44970A571F098DA_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_3F0F9592A0E917D4(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_E44970A571F098DA_METHOD_3_3F0F9592A0E917D4_OFFSET))(this, a1);
	}

	::System::Void Method_3_972E2881A37C9266(::System::String* a1, ::Class_1_204C453CC79AE4E0_2* a2, ::MoleMole::EntityHandle a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_204C453CC79AE4E0_2*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_E44970A571F098DA_METHOD_3_972E2881A37C9266_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_24AD3B57ADC65069(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_E44970A571F098DA_METHOD_3_24AD3B57ADC65069_OFFSET))(this, a1);
	}

	::System::Void Method_3_4EC0B6C9D65287A8(::System::String* a1, ::Class_1_204C453CC79AE4E0_2* a2, ::MoleMole::EntityHandle a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_1_204C453CC79AE4E0_2*, ::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_3_E44970A571F098DA_METHOD_3_4EC0B6C9D65287A8_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_E44970A571F098DA_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
