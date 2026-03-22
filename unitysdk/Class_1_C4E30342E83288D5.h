#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AE6D75D3DAA80FD7.h"
#include "unitysdk/MoleMole/ESettingPlatform.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigCoopVFXQualitySetting; }
namespace MoleMole::Config { class CoopVFXConfig; }

#define CLASS_1_C4E30342E83288D5_METHOD_1_1DB784163F7E1902_OFFSET UNITYSDK_OFFSET(0x6EAC750)
#define CLASS_1_C4E30342E83288D5_METHOD_1_36E15DA17A36554D_OFFSET UNITYSDK_OFFSET(0x6EACAA0)
#define CLASS_1_C4E30342E83288D5_METHOD_1_895E1070BE098C86_OFFSET UNITYSDK_OFFSET(0x6EAC2A0)
#define CLASS_1_C4E30342E83288D5_METHOD_1_8A0C5C8BD6643861_OFFSET UNITYSDK_OFFSET(0x6EAC380)
#define CLASS_1_C4E30342E83288D5_METHOD_1_D0C294E776D34A4F_OFFSET UNITYSDK_OFFSET(0x6EAC6F0)
#define CLASS_1_C4E30342E83288D5_METHOD_1_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x6EAC890)
#define CLASS_1_C4E30342E83288D5_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0x6EAC650)
#define CLASS_1_C4E30342E83288D5__CCTOR_OFFSET UNITYSDK_OFFSET(0x6EAC260)

inline static constexpr unsigned int Class_1_C4E30342E83288D5_TypeDefinitionIndex = 41755;

class Class_1_C4E30342E83288D5 : public ::System::Object
{
public:
	static ::MoleMole::Config::CoopVFXConfig** StaticGet_Field_1_2()
	{
		return (::MoleMole::Config::CoopVFXConfig**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4E30342E83288D5_TypeDefinitionIndex)->GetStaticField(0x2E670);
	}
	static ::MoleMole::Config::ConfigCoopVFXQualitySetting** StaticGet_Field_1_1()
	{
		return (::MoleMole::Config::ConfigCoopVFXQualitySetting**)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4E30342E83288D5_TypeDefinitionIndex)->GetStaticField(0x2E678);
	}
	static ::Enum_3_AE6D75D3DAA80FD7* StaticGet_Field_1_0()
	{
		return (::Enum_3_AE6D75D3DAA80FD7*)Il2CppClass::FromTypeDefinitionIndex(Class_1_C4E30342E83288D5_TypeDefinitionIndex)->GetStaticField(0xB110);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_895E1070BE098C86(::Enum_3_AE6D75D3DAA80FD7 a1)
	{
		return ((::System::Void(*)(::Enum_3_AE6D75D3DAA80FD7))((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_895E1070BE098C86_OFFSET))(a1);
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Void Method_1_D0C294E776D34A4F(::MoleMole::Config::CoopVFXConfig* a1)
	{
		return ((::System::Void(*)(::MoleMole::Config::CoopVFXConfig*))((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_D0C294E776D34A4F_OFFSET))(a1);
	}

	static ::MoleMole::Config::CoopVFXConfig* Method_1_1DB784163F7E1902()
	{
		return ((::MoleMole::Config::CoopVFXConfig*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_1DB784163F7E1902_OFFSET))();
	}

	static ::System::Void Method_1_EDFD49C942C75D6C()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_EDFD49C942C75D6C_OFFSET))();
	}

	static ::System::Boolean Method_1_36E15DA17A36554D(::MoleMole::ESettingPlatform a1, ::Enum_3_AE6D75D3DAA80FD7 a2, ::MoleMole::Config::CoopVFXConfig*& a3)
	{
		return ((::System::Boolean(*)(::MoleMole::ESettingPlatform, ::Enum_3_AE6D75D3DAA80FD7, ::MoleMole::Config::CoopVFXConfig*&))((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_36E15DA17A36554D_OFFSET))(a1, a2, a3);
	}

	static ::MoleMole::Config::CoopVFXConfig* Method_1_8A0C5C8BD6643861(::Enum_3_AE6D75D3DAA80FD7 a1)
	{
		return ((::MoleMole::Config::CoopVFXConfig*(*)(::Enum_3_AE6D75D3DAA80FD7))((::PBYTE)hIl2Cpp + CLASS_1_C4E30342E83288D5_METHOD_1_8A0C5C8BD6643861_OFFSET))(a1);
	}
};
