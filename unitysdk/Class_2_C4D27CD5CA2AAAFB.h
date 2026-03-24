#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_2AD981AB6ACE5E06.h"
#include "unitysdk/Enum_3_35E41D3091A2CE5B.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class ConfigSuiteV2RandomResult; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_C4D27CD5CA2AAAFB_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xCBC0F60)
#define CLASS_2_C4D27CD5CA2AAAFB_FROMFLX_OFFSET UNITYSDK_OFFSET(0xCBC09A0)
#define CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0xCBC1490)
#define CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_24FE016FD8ACDD68_OFFSET UNITYSDK_OFFSET(0xCBC0FC0)
#define CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_7493FC0605E5A625_OFFSET UNITYSDK_OFFSET(0xCBC0A20)
#define CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xCBC0870)
#define CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0xCBC0700)
#define CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0xCBC1330)
#define CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xCBC0770)
#define CLASS_2_C4D27CD5CA2AAAFB__CTOR_OFFSET UNITYSDK_OFFSET(0xCBC1320)

inline static constexpr unsigned int Class_2_C4D27CD5CA2AAAFB_TypeDefinitionIndex = 75741;

class Class_2_C4D27CD5CA2AAAFB : public ::Class_1_2AD981AB6ACE5E06
{
public:
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigSuiteV2RandomResult*>* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_1; // 0x20
	::Enum_3_35E41D3091A2CE5B Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_D48F6ED8C47DDD04_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_24FE016FD8ACDD68(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_24FE016FD8ACDD68_OFFSET))(this, a1, a2);
	}

	static ::Class_2_C4D27CD5CA2AAAFB* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_C4D27CD5CA2AAAFB*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	static ::Class_2_C4D27CD5CA2AAAFB* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_C4D27CD5CA2AAAFB*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_7493FC0605E5A625(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_C4D27CD5CA2AAAFB_METHOD_2_7493FC0605E5A625_OFFSET))(this, a1);
	}
};
