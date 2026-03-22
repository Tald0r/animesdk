#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class WindFieldConfig; }
namespace System { class Action; }

#define CLASS_1_8B0C1E03B464FD85_CLASS_1_55EDA2C75C830231_METHOD_1_FC7A5D5FB3CFD7EA_OFFSET UNITYSDK_OFFSET(0xCA0AAA0)
#define CLASS_1_8B0C1E03B464FD85_CLASS_1_55EDA2C75C830231__CTOR_OFFSET UNITYSDK_OFFSET(0xCA0AA90)

inline static constexpr unsigned int Class_1_8B0C1E03B464FD85_Class_1_55EDA2C75C830231_TypeDefinitionIndex = 44326;

class Class_1_8B0C1E03B464FD85_Class_1_55EDA2C75C830231 : public ::System::Object
{
public:
	::System::Action* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8B0C1E03B464FD85_CLASS_1_55EDA2C75C830231__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_FC7A5D5FB3CFD7EA(::MoleMole::Config::WindFieldConfig* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::WindFieldConfig*))((::PBYTE)hIl2Cpp + CLASS_1_8B0C1E03B464FD85_CLASS_1_55EDA2C75C830231_METHOD_1_FC7A5D5FB3CFD7EA_OFFSET))(this, a1);
	}
};
