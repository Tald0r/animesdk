#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_578FDFC2308A4349_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x61E75C0)
#define CLASS_4_578FDFC2308A4349_METHOD_4_6D417F6CA9DEC6F3_OFFSET UNITYSDK_OFFSET(0x61E73A0)
#define CLASS_4_578FDFC2308A4349_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x61E72D0)
#define CLASS_4_578FDFC2308A4349__CTOR_OFFSET UNITYSDK_OFFSET(0x61E7520)

inline static constexpr unsigned int Class_4_578FDFC2308A4349_TypeDefinitionIndex = 67645;

class Class_4_578FDFC2308A4349 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_D0B094D0B900A9F0<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_578FDFC2308A4349__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_578FDFC2308A4349_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_6D417F6CA9DEC6F3(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_578FDFC2308A4349_METHOD_4_6D417F6CA9DEC6F3_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_578FDFC2308A4349_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
