#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigSceneSound; }
namespace System { class Action; }

#define CLASS_1_E505F055D44C5CB5_CLASS_1_5CAC710666D1BE38_METHOD_1_4F5A1B77D67BB7C1_OFFSET UNITYSDK_OFFSET(0xBCB4D70)
#define CLASS_1_E505F055D44C5CB5_CLASS_1_5CAC710666D1BE38__CTOR_OFFSET UNITYSDK_OFFSET(0xBCB4D60)

inline static constexpr unsigned int Class_1_E505F055D44C5CB5_Class_1_5CAC710666D1BE38_TypeDefinitionIndex = 65886;

class Class_1_E505F055D44C5CB5_Class_1_5CAC710666D1BE38 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E505F055D44C5CB5_CLASS_1_5CAC710666D1BE38__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_4F5A1B77D67BB7C1(::MoleMole::Config::ConfigSceneSound* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigSceneSound*))((::PBYTE)hIl2Cpp + CLASS_1_E505F055D44C5CB5_CLASS_1_5CAC710666D1BE38_METHOD_1_4F5A1B77D67BB7C1_OFFSET))(this, a1);
	}
};
