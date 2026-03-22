#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class ConfigTimelineData; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F3C26C55904251F2_CLASS_1_269D6E1D8CE31B0C_METHOD_1_3FABCE49F3871940_OFFSET UNITYSDK_OFFSET(0x88F8E20)
#define CLASS_1_F3C26C55904251F2_CLASS_1_269D6E1D8CE31B0C__CTOR_OFFSET UNITYSDK_OFFSET(0x88F8E10)

inline static constexpr unsigned int Class_1_F3C26C55904251F2_Class_1_269D6E1D8CE31B0C_TypeDefinitionIndex = 42906;

class Class_1_F3C26C55904251F2_Class_1_269D6E1D8CE31B0C : public ::System::Object
{
public:
	::System::Action* Field_1_2; // 0x10
	::System::Action_1<::MoleMole::ConfigTimelineData*>* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::ConfigTimelineData*>* Field_1_0; // 0x20
	::System::Int32 Field_1_1; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2_CLASS_1_269D6E1D8CE31B0C__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_3FABCE49F3871940(::MoleMole::ConfigTimelineData* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::ConfigTimelineData*))((::PBYTE)hIl2Cpp + CLASS_1_F3C26C55904251F2_CLASS_1_269D6E1D8CE31B0C_METHOD_1_3FABCE49F3871940_OFFSET))(this, a1);
	}
};
