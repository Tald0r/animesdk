#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Foundation/ViewObject/ViewObjectHandle.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_8CA9F217C808EFA0_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x8DAC540)
#define CLASS_4_8CA9F217C808EFA0_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x8DAB4A0)
#define CLASS_4_8CA9F217C808EFA0_METHOD_4_B03854BB27F7E9FC_OFFSET UNITYSDK_OFFSET(0x8DAB8A0)
#define CLASS_4_8CA9F217C808EFA0_METHOD_4_BA45C85D2944586C_OFFSET UNITYSDK_OFFSET(0x8DAB570)
#define CLASS_4_8CA9F217C808EFA0__CTOR_OFFSET UNITYSDK_OFFSET(0x8DAC4A0)

inline static constexpr unsigned int Class_4_8CA9F217C808EFA0_TypeDefinitionIndex = 43068;

class Class_4_8CA9F217C808EFA0 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::System::Collections::Generic::List_1<::Foundation::ViewObject::ViewObjectHandle>*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_BA45C85D2944586C(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0_METHOD_4_BA45C85D2944586C_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	static ::System::Void Method_4_B03854BB27F7E9FC(::MoleMole::EntityHandle a1)
	{
		return ((::System::Void(*)(::MoleMole::EntityHandle))((::PBYTE)hIl2Cpp + CLASS_4_8CA9F217C808EFA0_METHOD_4_B03854BB27F7E9FC_OFFSET))(a1);
	}
};
