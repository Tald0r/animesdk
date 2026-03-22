#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_99013839B0110AC7_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x88A7D10)
#define CLASS_4_99013839B0110AC7_METHOD_4_8CE0803574BB66D7_OFFSET UNITYSDK_OFFSET(0x88A7C00)
#define CLASS_4_99013839B0110AC7_METHOD_4_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x88A7B30)
#define CLASS_4_99013839B0110AC7__CTOR_OFFSET UNITYSDK_OFFSET(0x88A7C70)

inline static constexpr unsigned int Class_4_99013839B0110AC7_TypeDefinitionIndex = 52017;

class Class_4_99013839B0110AC7 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_AF61EEC11F34483C<::System::Collections::Generic::List_1<::MoleMole::EntityHandle>*>* Field_4_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99013839B0110AC7__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_9681042564541CD6()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99013839B0110AC7_METHOD_4_9681042564541CD6_OFFSET))(this);
	}

	::System::Void Method_4_8CE0803574BB66D7(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_99013839B0110AC7_METHOD_4_8CE0803574BB66D7_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_99013839B0110AC7_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
