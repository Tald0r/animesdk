#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_F3948D237059FA7A.h"
#include "unitysdk/Struct_2_FE667B282E242C72.h"

class Class_2_8603DBDED602FDBE;
namespace System { class String; }
template <typename T> class Class_4_179456445C225AB4;
template <typename T> class Class_4_AF61EEC11F34483C;

#define CLASS_4_EAF636FAB025267D_METHOD_4_25DEA5C65A602671_OFFSET UNITYSDK_OFFSET(0x7B407D0)
#define CLASS_4_EAF636FAB025267D_METHOD_4_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x7B40170)
#define CLASS_4_EAF636FAB025267D_METHOD_4_652514A15DC5E0CD_OFFSET UNITYSDK_OFFSET(0x7B402D0)
#define CLASS_4_EAF636FAB025267D_METHOD_4_EC5EE51A67FE2040_OFFSET UNITYSDK_OFFSET(0x7B40510)
#define CLASS_4_EAF636FAB025267D__CTOR_OFFSET UNITYSDK_OFFSET(0x7B406E0)

inline static constexpr unsigned int Class_4_EAF636FAB025267D_TypeDefinitionIndex = 43217;

class Class_4_EAF636FAB025267D : public ::Class_3_F3948D237059FA7A
{
public:
	::Class_4_AF61EEC11F34483C<::System::Int32>* Field_4_1; // 0x28
	::Class_4_179456445C225AB4<::System::String*>* Field_4_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D__CTOR_OFFSET))(this);
	}

	::System::Void Method_4_33ACA6CB2ABC73F7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D_METHOD_4_33ACA6CB2ABC73F7_OFFSET))(this);
	}

	::System::Void Method_4_652514A15DC5E0CD(::Struct_2_FE667B282E242C72& a1)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_FE667B282E242C72&))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D_METHOD_4_652514A15DC5E0CD_OFFSET))(this, a1);
	}

	::System::Void Method_4_25DEA5C65A602671()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D_METHOD_4_25DEA5C65A602671_OFFSET))(this);
	}

	::System::Void Method_4_EC5EE51A67FE2040(::System::String* a1, ::Class_2_8603DBDED602FDBE* a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::Class_2_8603DBDED602FDBE*))((::PBYTE)hIl2Cpp + CLASS_4_EAF636FAB025267D_METHOD_4_EC5EE51A67FE2040_OFFSET))(this, a1, a2);
	}
};
