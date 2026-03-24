#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_1E55E07ADAD2E591.h"
#include "unitysdk/Enum_3_22FC528C31017F2F.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_3F84F94BB18519B8;
class Class_1_3FA5D0827BD681C1;
class Class_1_5FA9CCDDD9957726;
class Class_1_714AA90574E203E0;
namespace MoleMole::Config { class ConfigDynamicValue; }
namespace MoleMole::Config { class ConfigGadgetMetaData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_A0EE873EACD64B72_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xAAA6E70)
#define CLASS_1_A0EE873EACD64B72_FROMFLX_OFFSET UNITYSDK_OFFSET(0xAAA5660)
#define CLASS_1_A0EE873EACD64B72_METHOD_1_1943FA7E230C2956_OFFSET UNITYSDK_OFFSET(0xAAA7940)
#define CLASS_1_A0EE873EACD64B72_METHOD_1_24748FC20F375725_OFFSET UNITYSDK_OFFSET(0xAAA7920)
#define CLASS_1_A0EE873EACD64B72_METHOD_1_5CD2CB00158B8315_OFFSET UNITYSDK_OFFSET(0xAAA6ED0)
#define CLASS_1_A0EE873EACD64B72_METHOD_1_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0xAAA56E0)
#define CLASS_1_A0EE873EACD64B72_METHOD_1_8C8625211DA811AE_OFFSET UNITYSDK_OFFSET(0xAAA7930)
#define CLASS_1_A0EE873EACD64B72__CCTOR_OFFSET UNITYSDK_OFFSET(0xAAA78E0)
#define CLASS_1_A0EE873EACD64B72__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA78D0)

inline static constexpr unsigned int Class_1_A0EE873EACD64B72_TypeDefinitionIndex = 44294;

class Class_1_A0EE873EACD64B72 : public ::System::Object
{
public:
	static ::Class_1_3FA5D0827BD681C1** StaticGet_Field_1_15()
	{
		return (::Class_1_3FA5D0827BD681C1**)Il2CppClass::FromTypeDefinitionIndex(Class_1_A0EE873EACD64B72_TypeDefinitionIndex)->GetStaticField(0x2EC00);
	}
	::Class_1_3F84F94BB18519B8* Field_1_12; // 0x10
	::MoleMole::Config::ConfigGadgetMetaData* Field_1_11; // 0x18
	::Class_1_5FA9CCDDD9957726* Field_1_16; // 0x20
	::System::Collections::Generic::List_1<::System::String*>* Field_1_13; // 0x28
	::Class_1_714AA90574E203E0* Field_1_14; // 0x30
	::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigDynamicValue*>* Field_1_10; // 0x38
	::UnityEngine::Vector3 Field_1_2; // 0x40
	::System::Int32 Field_1_0; // 0x4C
	::System::Int32 Field_1_7; // 0x50
	::UnityEngine::Vector3 Field_1_3; // 0x54
	::System::Int32 Field_1_4; // 0x60
	::Enum_3_22FC528C31017F2F Field_1_1; // 0x64
	::System::Int32 Field_1_8; // 0x68
	::System::Int32 Field_1_6; // 0x6C
	::System::Int32 Field_1_9; // 0x70
	::Enum_3_1E55E07ADAD2E591 Field_1_5; // 0x74

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0EE873EACD64B72__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_A0EE873EACD64B72__CCTOR_OFFSET))();
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_A0EE873EACD64B72_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A0EE873EACD64B72_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_A0EE873EACD64B72_METHOD_1_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_5CD2CB00158B8315(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_A0EE873EACD64B72_METHOD_1_5CD2CB00158B8315_OFFSET))(this, a1, a2);
	}

	::Class_1_5FA9CCDDD9957726* Method_1_24748FC20F375725()
	{
		return ((::Class_1_5FA9CCDDD9957726*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_A0EE873EACD64B72_METHOD_1_24748FC20F375725_OFFSET))(this);
	}

	::System::Void Method_1_8C8625211DA811AE(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_A0EE873EACD64B72_METHOD_1_8C8625211DA811AE_OFFSET))(this, a1);
	}

	::System::Void Method_1_1943FA7E230C2956(::Class_1_5FA9CCDDD9957726* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_5FA9CCDDD9957726*))((::PBYTE)hIl2Cpp + CLASS_1_A0EE873EACD64B72_METHOD_1_1943FA7E230C2956_OFFSET))(this, a1);
	}
};
