#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Cameras { class VNoiseSettings; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_5E6C82E78B01898D_CLASS_1_E6FAC27B081C69F8_METHOD_1_761B17D98276056E_OFFSET UNITYSDK_OFFSET(0x81A56B0)
#define CLASS_1_5E6C82E78B01898D_CLASS_1_E6FAC27B081C69F8__CTOR_OFFSET UNITYSDK_OFFSET(0x81A56A0)

inline static constexpr unsigned int Class_1_5E6C82E78B01898D_Class_1_E6FAC27B081C69F8_TypeDefinitionIndex = 61179;

class Class_1_5E6C82E78B01898D_Class_1_E6FAC27B081C69F8 : public ::System::Object
{
public:
	::System::Action_1<::MoleMole::Cameras::VNoiseSettings*>* Field_1_1; // 0x10
	::Foundation::AssetPath Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_E6FAC27B081C69F8__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_761B17D98276056E(::MoleMole::Cameras::VNoiseSettings* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::VNoiseSettings*))((::PBYTE)hIl2Cpp + CLASS_1_5E6C82E78B01898D_CLASS_1_E6FAC27B081C69F8_METHOD_1_761B17D98276056E_OFFSET))(this, a1);
	}
};
