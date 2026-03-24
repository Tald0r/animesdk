#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;

#define CLASS_4_60372101C6F67280_METHOD_4_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x7EA4680)
#define CLASS_4_60372101C6F67280_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x7EA4BD0)
#define CLASS_4_60372101C6F67280_METHOD_4_53923FFF9F2F3366_OFFSET UNITYSDK_OFFSET(0x7EA4870)
#define CLASS_4_60372101C6F67280__CTOR_OFFSET UNITYSDK_OFFSET(0x7EA4AA0)

inline static constexpr unsigned int Class_4_60372101C6F67280_TypeDefinitionIndex = 75955;

class Class_4_60372101C6F67280 : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_4_2; // 0x30
	::Class_4_179456445C225AB4<::MoleMole::EntityHandle>* Field_4_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60372101C6F67280__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_1290EA767C459179()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60372101C6F67280_METHOD_4_1290EA767C459179_OFFSET))(this);
	}

	::System::Void Method_4_53923FFF9F2F3366(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_60372101C6F67280_METHOD_4_53923FFF9F2F3366_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_60372101C6F67280_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}
};
