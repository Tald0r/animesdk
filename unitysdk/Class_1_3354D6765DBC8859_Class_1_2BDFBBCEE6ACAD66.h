#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHollowChessboardParticle; }
namespace System { class Action; }

#define CLASS_1_3354D6765DBC8859_CLASS_1_2BDFBBCEE6ACAD66_METHOD_1_D8D6595BF64E2B1B_OFFSET UNITYSDK_OFFSET(0x6991400)
#define CLASS_1_3354D6765DBC8859_CLASS_1_2BDFBBCEE6ACAD66__CTOR_OFFSET UNITYSDK_OFFSET(0x69913F0)

inline static constexpr unsigned int Class_1_3354D6765DBC8859_Class_1_2BDFBBCEE6ACAD66_TypeDefinitionIndex = 57361;

class Class_1_3354D6765DBC8859_Class_1_2BDFBBCEE6ACAD66 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_CLASS_1_2BDFBBCEE6ACAD66__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_D8D6595BF64E2B1B(::MoleMole::Config::ConfigHollowChessboardParticle* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHollowChessboardParticle*))((::PBYTE)hIl2Cpp + CLASS_1_3354D6765DBC8859_CLASS_1_2BDFBBCEE6ACAD66_METHOD_1_D8D6595BF64E2B1B_OFFSET))(this, a1);
	}
};
