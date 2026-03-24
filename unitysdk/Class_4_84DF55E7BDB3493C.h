#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
template <typename T> class Class_4_D0B094D0B900A9F0;

#define CLASS_4_84DF55E7BDB3493C_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x15669BE0)
#define CLASS_4_84DF55E7BDB3493C_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x1566A270)
#define CLASS_4_84DF55E7BDB3493C_METHOD_4_B47CA6A62D24ADA2_OFFSET UNITYSDK_OFFSET(0x15669DD0)
#define CLASS_4_84DF55E7BDB3493C__CTOR_OFFSET UNITYSDK_OFFSET(0x1566A090)

inline static constexpr unsigned int Class_4_84DF55E7BDB3493C_TypeDefinitionIndex = 44162;

class Class_4_84DF55E7BDB3493C : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_2; // 0x28
	::Class_4_D0B094D0B900A9F0<::MoleMole::EntityHandle>* Field_4_0; // 0x30
	::Class_3_B537A0AA78803363* Field_4_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_84DF55E7BDB3493C__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_84DF55E7BDB3493C_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_B47CA6A62D24ADA2(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_84DF55E7BDB3493C_METHOD_4_B47CA6A62D24ADA2_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_84DF55E7BDB3493C_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
