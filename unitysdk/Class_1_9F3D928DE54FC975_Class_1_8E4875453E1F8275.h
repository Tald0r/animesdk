#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigUILight; }
namespace System { class Action; }

#define CLASS_1_9F3D928DE54FC975_CLASS_1_8E4875453E1F8275_METHOD_1_4770E0A14FBD3D9E_OFFSET UNITYSDK_OFFSET(0xA5A7410)
#define CLASS_1_9F3D928DE54FC975_CLASS_1_8E4875453E1F8275__CTOR_OFFSET UNITYSDK_OFFSET(0xA5A7400)

inline static constexpr unsigned int Class_1_9F3D928DE54FC975_Class_1_8E4875453E1F8275_TypeDefinitionIndex = 46398;

class Class_1_9F3D928DE54FC975_Class_1_8E4875453E1F8275 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9F3D928DE54FC975_CLASS_1_8E4875453E1F8275__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4770E0A14FBD3D9E(::MoleMole::ConfigUILight* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigUILight*))((::PBYTE)hIl2Cpp + CLASS_1_9F3D928DE54FC975_CLASS_1_8E4875453E1F8275_METHOD_1_4770E0A14FBD3D9E_OFFSET))(this, a1);
	}
};
