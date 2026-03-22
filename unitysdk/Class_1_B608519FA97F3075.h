#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_314;
namespace MoleMole { class UIBaseController; }
namespace UnityEngine { class Transform; }
template <typename T1, typename T2> class Class_2_1908F2437AE347F8;

#define CLASS_1_B608519FA97F3075_METHOD_1_0B6A7CBC96FAE4AC_OFFSET UNITYSDK_OFFSET(0x9976B30)
#define CLASS_1_B608519FA97F3075_METHOD_1_30D1209326FA87FC_OFFSET UNITYSDK_OFFSET(0x9976A70)
#define CLASS_1_B608519FA97F3075_METHOD_1_9EB66507931F982D_OFFSET UNITYSDK_OFFSET(0x9976710)
#define CLASS_1_B608519FA97F3075_METHOD_1_C9D283487553FD66_OFFSET UNITYSDK_OFFSET(0x9976C70)
#define CLASS_1_B608519FA97F3075__CTOR_OFFSET UNITYSDK_OFFSET(0x9976660)

inline static constexpr unsigned int Class_1_B608519FA97F3075_TypeDefinitionIndex = 72022;

class Class_1_B608519FA97F3075 : public ::System::Object
{
public:
	::Class_2_1908F2437AE347F8<::MoleMole::UIBaseController*, ::Class_0_16E4307DCC419505_314*>* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B608519FA97F3075__CTOR_OFFSET))(this);
	}

	::Class_0_16E4307DCC419505_314* Method_1_9EB66507931F982D(::MoleMole::UIBaseController* a1, ::UnityEngine::Transform* a2)
	{
		return ((::Class_0_16E4307DCC419505_314*(*)(::PVOID, ::MoleMole::UIBaseController*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLASS_1_B608519FA97F3075_METHOD_1_9EB66507931F982D_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_30D1209326FA87FC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B608519FA97F3075_METHOD_1_30D1209326FA87FC_OFFSET))(this);
	}

	::System::Void Method_1_0B6A7CBC96FAE4AC(::MoleMole::UIBaseController* a1, ::Class_0_16E4307DCC419505_314* a2)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*, ::Class_0_16E4307DCC419505_314*))((::PBYTE)hIl2Cpp + CLASS_1_B608519FA97F3075_METHOD_1_0B6A7CBC96FAE4AC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_1_C9D283487553FD66(::MoleMole::UIBaseController* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController*))((::PBYTE)hIl2Cpp + CLASS_1_B608519FA97F3075_METHOD_1_C9D283487553FD66_OFFSET))(this, a1);
	}
};
