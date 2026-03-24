#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_6BFA61840E317AC4.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_499;
class Class_1_BC9D27E6028F322B;
namespace Nap::NapECS { class EcsEntity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_1_F73E20E687FE8961_METHOD_1_667FEF37E856C091_OFFSET UNITYSDK_OFFSET(0x7683C30)
#define CLASS_1_F73E20E687FE8961_METHOD_1_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x7683F90)
#define CLASS_1_F73E20E687FE8961__CTOR_OFFSET UNITYSDK_OFFSET(0x7683BF0)

inline static constexpr unsigned int Class_1_F73E20E687FE8961_TypeDefinitionIndex = 71861;

class Class_1_F73E20E687FE8961 : public ::System::Object
{
public:
	::Nap::NapECS::EcsEntity* Field_1_1; // 0x10
	::System::Action* Field_1_5; // 0x18
	::System::Action* Field_1_4; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::Action_1<::Class_1_BC9D27E6028F322B*>* Field_1_6; // 0x30
	::Enum_3_6BFA61840E317AC4 Field_1_2; // 0x38
	::System::Int32 Field_1_0; // 0x3C

	::System::Void _ctor(::System::Int32 a1, ::Nap::NapECS::EcsEntity* a2, ::Enum_3_6BFA61840E317AC4 a3, ::System::String* a4, ::System::Action* a5, ::System::Action* a6, ::System::Action_1<::Class_1_BC9D27E6028F322B*>* a7)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::Nap::NapECS::EcsEntity*, ::Enum_3_6BFA61840E317AC4, ::System::String*, ::System::Action*, ::System::Action*, ::System::Action_1<::Class_1_BC9D27E6028F322B*>*))((::PBYTE)hIl2Cpp + CLASS_1_F73E20E687FE8961__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
	}

	::Class_0_16E4307DCC419505_499* Method_1_667FEF37E856C091()
	{
		return ((::Class_0_16E4307DCC419505_499*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F73E20E687FE8961_METHOD_1_667FEF37E856C091_OFFSET))(this);
	}

	::System::Int32 Method_1_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F73E20E687FE8961_METHOD_1_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
