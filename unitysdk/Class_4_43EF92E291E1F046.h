#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_43EF92E291E1F046_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xE980110)
#define CLASS_4_43EF92E291E1F046_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE97EC20)
#define CLASS_4_43EF92E291E1F046_METHOD_4_ACDF08D3A8040E2E_OFFSET UNITYSDK_OFFSET(0xE97ECF0)
#define CLASS_4_43EF92E291E1F046_METHOD_4_B03854BB27F7E9FC_OFFSET UNITYSDK_OFFSET(0xE97F470)
#define CLASS_4_43EF92E291E1F046__CTOR_OFFSET UNITYSDK_OFFSET(0xE980070)

inline static constexpr unsigned int Class_4_43EF92E291E1F046_TypeDefinitionIndex = 46845;

class Class_4_43EF92E291E1F046 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Boolean>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_43EF92E291E1F046__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_43EF92E291E1F046_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_ACDF08D3A8040E2E(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_43EF92E291E1F046_METHOD_4_ACDF08D3A8040E2E_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_43EF92E291E1F046_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	static ::System::Void Method_4_B03854BB27F7E9FC(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_4_43EF92E291E1F046_METHOD_4_B03854BB27F7E9FC_OFFSET))(a1);
	}
};
