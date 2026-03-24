#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardCamera; }
namespace System { class Action; }

#define CLASS_1_57576DE974E76FDE_CLASS_1_A644B3D2CF5DFB44_METHOD_1_313595394CE243D4_OFFSET UNITYSDK_OFFSET(0x7B3EE80)
#define CLASS_1_57576DE974E76FDE_CLASS_1_A644B3D2CF5DFB44__CTOR_OFFSET UNITYSDK_OFFSET(0x7B3EE70)

inline static constexpr unsigned int Class_1_57576DE974E76FDE_Class_1_A644B3D2CF5DFB44_TypeDefinitionIndex = 69774;

class Class_1_57576DE974E76FDE_Class_1_A644B3D2CF5DFB44 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_CLASS_1_A644B3D2CF5DFB44__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_313595394CE243D4(::MoleMole::Config::ConfigHollowChessboardCamera* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardCamera*))((::PBYTE)hIl2Cpp + CLASS_1_57576DE974E76FDE_CLASS_1_A644B3D2CF5DFB44_METHOD_1_313595394CE243D4_OFFSET))(this, a1);
	}
};
