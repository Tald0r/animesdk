#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_563;
class Class_1_3A97FC721BDAAE78;
namespace MoleMole { class ConfigTempleLevelUpEvent; }

#define CLASS_1_42858E6F4249A13B_METHOD_1_1BF29996F49CFE25_OFFSET UNITYSDK_OFFSET(0x8DB8BE0)
#define CLASS_1_42858E6F4249A13B_METHOD_1_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8DB8B60)
#define CLASS_1_42858E6F4249A13B_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8DB8B00)
#define CLASS_1_42858E6F4249A13B_METHOD_1_FB4BE762B6186C23_OFFSET UNITYSDK_OFFSET(0x8DB8BC0)
#define CLASS_1_42858E6F4249A13B__CTOR_OFFSET UNITYSDK_OFFSET(0x8DB8AF0)

inline static constexpr unsigned int Class_1_42858E6F4249A13B_TypeDefinitionIndex = 68888;

class Class_1_42858E6F4249A13B : public ::System::Object
{
public:
	::MoleMole::ConfigTempleLevelUpEvent* Field_1_0; // 0x10
	::Class_1_3A97FC721BDAAE78* Field_1_2; // 0x18
	::System::Boolean Field_1_1; // 0x20

	::System::Void _ctor(::Class_1_3A97FC721BDAAE78* a1, ::MoleMole::ConfigTempleLevelUpEvent* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_3A97FC721BDAAE78*, ::MoleMole::ConfigTempleLevelUpEvent*))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B_METHOD_1_CA373AA1C7054598_1_OFFSET))(this);
	}

	::System::Single Method_1_FB4BE762B6186C23()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B_METHOD_1_FB4BE762B6186C23_OFFSET))(this);
	}

	::System::Void Method_1_1BF29996F49CFE25(::Class_0_16E4307DCC419505_563* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_563*))((::PBYTE)hIl2Cpp + CLASS_1_42858E6F4249A13B_METHOD_1_1BF29996F49CFE25_OFFSET))(this, a1);
	}
};
