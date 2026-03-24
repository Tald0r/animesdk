#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F33340E023067DAF.h"

class Class_3_0237EEC92C800045;
namespace Nap::NapECS { class EcsFilter; }
namespace Nap::NapECS { class EcsWorld; }

#define CLASS_3_885275E08D6156BD_CREATEFILTERS_OFFSET UNITYSDK_OFFSET(0xD85A9C0)
#define CLASS_3_885275E08D6156BD_METHOD_3_7A294A432C2B6085_OFFSET UNITYSDK_OFFSET(0xD85ACA0)
#define CLASS_3_885275E08D6156BD_METHOD_3_BADC81CF9C936EDA_OFFSET UNITYSDK_OFFSET(0xD85AC30)
#define CLASS_3_885275E08D6156BD_METHOD_3_F5B50F2A74C670C4_OFFSET UNITYSDK_OFFSET(0xD85ADF0)
#define CLASS_3_885275E08D6156BD__CTOR_OFFSET UNITYSDK_OFFSET(0xD85AC10)

inline static constexpr unsigned int Class_3_885275E08D6156BD_TypeDefinitionIndex = 71057;

class Class_3_885275E08D6156BD : public ::Class_2_F33340E023067DAF
{
public:
	::Nap::NapECS::EcsFilter* Field_3_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_885275E08D6156BD__CTOR_OFFSET))(this);
	}

	::System::Void CreateFilters(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_885275E08D6156BD_CREATEFILTERS_OFFSET))(this, a1);
	}

	::System::Void Method_3_BADC81CF9C936EDA(::Nap::NapECS::EcsWorld* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Nap::NapECS::EcsWorld*))((::PBYTE)hIl2Cpp + CLASS_3_885275E08D6156BD_METHOD_3_BADC81CF9C936EDA_OFFSET))(this, a1);
	}

	::System::Void Method_3_7A294A432C2B6085(::Class_3_0237EEC92C800045* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_0237EEC92C800045*))((::PBYTE)hIl2Cpp + CLASS_3_885275E08D6156BD_METHOD_3_7A294A432C2B6085_OFFSET))(this, a1);
	}

	::System::Void Method_3_F5B50F2A74C670C4(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_3_885275E08D6156BD_METHOD_3_F5B50F2A74C670C4_OFFSET))(this, a1);
	}
};
