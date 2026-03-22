#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

class Class_1_DEBC388222B8D99B_Class_1_ADA90F6FF4FE19C6;
namespace MoleMole::Config { class ConfigCameraShakes; }

#define CLASS_1_DEBC388222B8D99B_CLASS_1_B2D6726E4E66362D_METHOD_1_4CFD9C647887AE26_OFFSET UNITYSDK_OFFSET(0xD2648D0)
#define CLASS_1_DEBC388222B8D99B_CLASS_1_B2D6726E4E66362D__CTOR_OFFSET UNITYSDK_OFFSET(0xD2648C0)

inline static constexpr unsigned int Class_1_DEBC388222B8D99B_Class_1_B2D6726E4E66362D_TypeDefinitionIndex = 59270;

class Class_1_DEBC388222B8D99B_Class_1_B2D6726E4E66362D : public ::System::Object
{
public:
	::Class_1_DEBC388222B8D99B_Class_1_ADA90F6FF4FE19C6* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_B2D6726E4E66362D__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4CFD9C647887AE26(::MoleMole::Config::ConfigCameraShakes* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigCameraShakes*))((::PBYTE)hIl2Cpp + CLASS_1_DEBC388222B8D99B_CLASS_1_B2D6726E4E66362D_METHOD_1_4CFD9C647887AE26_OFFSET))(this, a1);
	}
};
