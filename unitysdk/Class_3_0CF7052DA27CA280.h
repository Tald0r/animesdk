#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_52F82E04F7FEE529.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_3_0CF7052DA27CA280_METHOD_3_751C97AC1D183C4B_OFFSET UNITYSDK_OFFSET(0x70EE3C0)
#define CLASS_3_0CF7052DA27CA280_METHOD_3_B6A2D2418E5AA427_OFFSET UNITYSDK_OFFSET(0x70EE330)
#define CLASS_3_0CF7052DA27CA280_METHOD_3_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x70EEF40)
#define CLASS_3_0CF7052DA27CA280_METHOD_3_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x70EE050)
#define CLASS_3_0CF7052DA27CA280__CTOR_OFFSET UNITYSDK_OFFSET(0x70EEDA0)

inline static constexpr unsigned int Class_3_0CF7052DA27CA280_TypeDefinitionIndex = 52968;

class Class_3_0CF7052DA27CA280 : public ::Class_2_52F82E04F7FEE529
{
public:
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_3_0; // 0x18
	::Class_4_AF61EEC11F34483C<::System::Boolean>* Field_3_4; // 0x20
	::Class_4_179456445C225AB4<::System::Single>* Field_3_2; // 0x28
	::Class_4_179456445C225AB4<::System::Single>* Field_3_3; // 0x30
	::Class_4_179456445C225AB4<::System::Single>* Field_3_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0CF7052DA27CA280__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0CF7052DA27CA280_METHOD_3_EDFD49C942C75D6C_OFFSET))(this);
	}

	::System::Void Method_3_B6A2D2418E5AA427(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_0CF7052DA27CA280_METHOD_3_B6A2D2418E5AA427_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_751C97AC1D183C4B(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_3_0CF7052DA27CA280_METHOD_3_751C97AC1D183C4B_OFFSET))(this, a1);
	}

	::System::Void Method_3_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_0CF7052DA27CA280_METHOD_3_CA373AA1C7054598_OFFSET))(this);
	}
};
