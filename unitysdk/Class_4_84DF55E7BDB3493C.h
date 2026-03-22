#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_3_B537A0AA78803363;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_84DF55E7BDB3493C_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xA6BE740)
#define CLASS_4_84DF55E7BDB3493C_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0xA6BEDD0)
#define CLASS_4_84DF55E7BDB3493C_METHOD_4_B47CA6A62D24ADA2_OFFSET UNITYSDK_OFFSET(0xA6BE930)
#define CLASS_4_84DF55E7BDB3493C__CTOR_OFFSET UNITYSDK_OFFSET(0xA6BEBF0)

inline static constexpr unsigned int Class_4_84DF55E7BDB3493C_TypeDefinitionIndex = 70125;

class Class_4_84DF55E7BDB3493C : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_3_B537A0AA78803363* Field_4_2; // 0x28
	::Class_4_AF61EEC11F34483C<::MoleMole::EntityHandle>* Field_4_0; // 0x30
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
