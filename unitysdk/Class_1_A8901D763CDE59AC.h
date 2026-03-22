#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_1_A8901D763CDE59AC_METHOD_1_1A5BD1986C664F39_1_OFFSET UNITYSDK_OFFSET(0x675AA20)
#define CLASS_1_A8901D763CDE59AC_METHOD_1_1A5BD1986C664F39_OFFSET UNITYSDK_OFFSET(0x675A8C0)
#define CLASS_1_A8901D763CDE59AC_METHOD_1_33E9ABA21333C8DD_OFFSET UNITYSDK_OFFSET(0x675A750)

inline static constexpr unsigned int Class_1_A8901D763CDE59AC_TypeDefinitionIndex = 49136;

class Class_1_A8901D763CDE59AC : public ::System::Object
{
public:
	static ::Nap::NapECS::EcsFilter* Method_1_33E9ABA21333C8DD(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::Nap::NapECS::EcsFilter*(*)(::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_1_A8901D763CDE59AC_METHOD_1_33E9ABA21333C8DD_OFFSET))(a1);
	}

	static ::System::Void Method_1_1A5BD1986C664F39(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_1_A8901D763CDE59AC_METHOD_1_1A5BD1986C664F39_OFFSET))(a1);
	}

	static ::System::Void Method_1_1A5BD1986C664F39_1(::Nap::NapECS::EcsFilter* a1)
	{
		return ((::System::Void(*)(::Nap::NapECS::EcsFilter*))((::PBYTE)hIl2Cpp + CLASS_1_A8901D763CDE59AC_METHOD_1_1A5BD1986C664F39_1_OFFSET))(a1);
	}
};
