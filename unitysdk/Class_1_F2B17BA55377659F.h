#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_5FA9CCDDD9957726;
class Class_1_6657081C8A94CA44;
class Class_1_8C28E085C991E9A7;
class Class_1_A3E409271822DC25;
namespace MoleMole::Config { class ConfigCommonLevelData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_F2B17BA55377659F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9FCE920)
#define CLASS_1_F2B17BA55377659F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9FCDF30)
#define CLASS_1_F2B17BA55377659F_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x9FCDFB0)
#define CLASS_1_F2B17BA55377659F_METHOD_1_41430AFD3BF44B19_OFFSET UNITYSDK_OFFSET(0x9FCE980)
#define CLASS_1_F2B17BA55377659F__CTOR_OFFSET UNITYSDK_OFFSET(0x9FCEDE0)

inline static constexpr unsigned int Class_1_F2B17BA55377659F_TypeDefinitionIndex = 52235;

class Class_1_F2B17BA55377659F : public ::System::Object
{
public:
	::Class_1_A3E409271822DC25* Field_1_2; // 0x10
	::Class_1_8C28E085C991E9A7* Field_1_3; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigCommonLevelData*>* Field_1_4; // 0x20
	::Class_1_5FA9CCDDD9957726* Field_1_1; // 0x28
	::Class_1_6657081C8A94CA44* Field_1_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F2B17BA55377659F__CTOR_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_F2B17BA55377659F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2B17BA55377659F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_F2B17BA55377659F_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_41430AFD3BF44B19(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_F2B17BA55377659F_METHOD_1_41430AFD3BF44B19_OFFSET))(this, a1, a2);
	}
};
