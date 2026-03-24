#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigPosRot; }

#define CLASS_1_8BBA990D0D939D52_METHOD_1_1D4018D4200358D0_OFFSET UNITYSDK_OFFSET(0xCE75720)
#define CLASS_1_8BBA990D0D939D52_METHOD_1_2DA5E14835AEFAD5_OFFSET UNITYSDK_OFFSET(0xCE757A0)
#define CLASS_1_8BBA990D0D939D52_METHOD_1_735EE20B25F86BF4_OFFSET UNITYSDK_OFFSET(0xCE75840)
#define CLASS_1_8BBA990D0D939D52_METHOD_1_8924D34935274FBC_OFFSET UNITYSDK_OFFSET(0xCE75D40)
#define CLASS_1_8BBA990D0D939D52_METHOD_1_9D455FE4693966A8_OFFSET UNITYSDK_OFFSET(0xCE75BA0)
#define CLASS_1_8BBA990D0D939D52_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCE75CC0)
#define CLASS_1_8BBA990D0D939D52__CTOR_OFFSET UNITYSDK_OFFSET(0xCE75710)

inline static constexpr unsigned int Class_1_8BBA990D0D939D52_TypeDefinitionIndex = 55073;

class Class_1_8BBA990D0D939D52 : public ::System::Object
{
public:
	::MoleMole::Config::ConfigPosRot* Field_1_0; // 0x10
	::UnityEngine::Vector3 Field_1_3; // 0x18
	::System::UInt32 Field_1_2; // 0x24
	::System::Boolean Field_1_5; // 0x28
	::System::UInt32 Field_1_1; // 0x2C
	::System::Int32 Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BBA990D0D939D52__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_1D4018D4200358D0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BBA990D0D939D52_METHOD_1_1D4018D4200358D0_OFFSET))(this);
	}

	::UnityEngine::Vector3 Method_1_2DA5E14835AEFAD5()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BBA990D0D939D52_METHOD_1_2DA5E14835AEFAD5_OFFSET))(this);
	}

	::System::Void Method_1_9D455FE4693966A8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BBA990D0D939D52_METHOD_1_9D455FE4693966A8_OFFSET))(this);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BBA990D0D939D52_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Void Method_1_8924D34935274FBC(::MoleMole::Config::ConfigPosRot* a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigPosRot*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_8BBA990D0D939D52_METHOD_1_8924D34935274FBC_OFFSET))(this, a1, a2, a3);
	}

	::System::Void Method_1_735EE20B25F86BF4()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8BBA990D0D939D52_METHOD_1_735EE20B25F86BF4_OFFSET))(this);
	}
};
