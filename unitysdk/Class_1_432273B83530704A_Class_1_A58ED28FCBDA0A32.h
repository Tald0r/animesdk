#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUIGachaPortrait; }
namespace System { class Action; }

#define CLASS_1_432273B83530704A_CLASS_1_A58ED28FCBDA0A32_METHOD_1_E5D3BD89CA08E5CD_OFFSET UNITYSDK_OFFSET(0x7A23770)
#define CLASS_1_432273B83530704A_CLASS_1_A58ED28FCBDA0A32__CTOR_OFFSET UNITYSDK_OFFSET(0x7A23310)

inline static constexpr unsigned int Class_1_432273B83530704A_Class_1_A58ED28FCBDA0A32_TypeDefinitionIndex = 47462;

class Class_1_432273B83530704A_Class_1_A58ED28FCBDA0A32 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_432273B83530704A_CLASS_1_A58ED28FCBDA0A32__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_E5D3BD89CA08E5CD(::MoleMole::Config::ConfigUIGachaPortrait* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigUIGachaPortrait*))((::PBYTE)hIl2Cpp + CLASS_1_432273B83530704A_CLASS_1_A58ED28FCBDA0A32_METHOD_1_E5D3BD89CA08E5CD_OFFSET))(this, a1);
	}
};
