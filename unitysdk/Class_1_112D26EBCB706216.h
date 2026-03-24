#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/BuffGroupName.h"
#include "unitysdk/MoleMole/Config/HitForwardType.h"
#include "unitysdk/System/Object.h"

class Class_1_236FD73ABC492E3F;
class Class_1_30670D995B76EFF5;
class Class_1_F8D7C3AB2C204160;
class Class_2_542A772D07AFD4EA;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class String; }

#define CLASS_1_112D26EBCB706216_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x9B63010)
#define CLASS_1_112D26EBCB706216_FROMFLX_OFFSET UNITYSDK_OFFSET(0x9B62190)
#define CLASS_1_112D26EBCB706216_METHOD_1_0578713EDB32B89E_OFFSET UNITYSDK_OFFSET(0x9B62210)
#define CLASS_1_112D26EBCB706216_METHOD_1_2D730252EA599DD2_OFFSET UNITYSDK_OFFSET(0x9B63F40)
#define CLASS_1_112D26EBCB706216_METHOD_1_5D582D26566137B5_OFFSET UNITYSDK_OFFSET(0x9B63C50)
#define CLASS_1_112D26EBCB706216_METHOD_1_70589F89E4D22649_OFFSET UNITYSDK_OFFSET(0x9B63B60)
#define CLASS_1_112D26EBCB706216_METHOD_1_AECF8BEC293ED42A_OFFSET UNITYSDK_OFFSET(0x9B63740)
#define CLASS_1_112D26EBCB706216_METHOD_1_C76B65C3F8F54D3B_OFFSET UNITYSDK_OFFSET(0x9B63EA0)
#define CLASS_1_112D26EBCB706216_METHOD_1_CC0163455123FB24_OFFSET UNITYSDK_OFFSET(0x9B64010)
#define CLASS_1_112D26EBCB706216_METHOD_1_E091A92EA4DC55B8_OFFSET UNITYSDK_OFFSET(0x9B63070)
#define CLASS_1_112D26EBCB706216_METHOD_1_F7300E87EC49A206_OFFSET UNITYSDK_OFFSET(0x9B62110)
#define CLASS_1_112D26EBCB706216__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9B62090)
#define CLASS_1_112D26EBCB706216__CTOR_OFFSET UNITYSDK_OFFSET(0x9B62080)

inline static constexpr unsigned int Class_1_112D26EBCB706216_TypeDefinitionIndex = 62941;

class Class_1_112D26EBCB706216 : public ::System::Object
{
public:
	::Class_1_30670D995B76EFF5* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::Class_1_F8D7C3AB2C204160* Field_1_3; // 0x20
	::MoleMole::Config::DynamicFloat* Field_1_6; // 0x28
	::System::Boolean Field_1_9; // 0x30
	::System::Boolean Field_1_4; // 0x31
	::System::Boolean Field_1_5; // 0x32
	::System::Boolean Field_1_8; // 0x33
	::System::Boolean Field_1_10; // 0x34
	::MoleMole::Config::HitForwardType Field_1_7; // 0x38
	::System::Int32 Field_1_2; // 0x3C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216__CTOR_1_OFFSET))(this, a1);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::Class_1_F8D7C3AB2C204160* Method_1_AECF8BEC293ED42A()
	{
		return ((::Class_1_F8D7C3AB2C204160*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_METHOD_1_AECF8BEC293ED42A_OFFSET))(this);
	}

	::System::Int32 Method_1_5D582D26566137B5()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_METHOD_1_5D582D26566137B5_OFFSET))(this);
	}

	::System::Boolean Method_1_70589F89E4D22649()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_METHOD_1_70589F89E4D22649_OFFSET))(this);
	}

	::Class_2_542A772D07AFD4EA* Method_1_C76B65C3F8F54D3B()
	{
		return ((::Class_2_542A772D07AFD4EA*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_METHOD_1_C76B65C3F8F54D3B_OFFSET))(this);
	}

	::System::Void Method_1_F7300E87EC49A206()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_METHOD_1_F7300E87EC49A206_OFFSET))(this);
	}

	::System::Boolean Method_1_0578713EDB32B89E(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_METHOD_1_0578713EDB32B89E_OFFSET))(this, a1);
	}

	::System::Int32 Method_1_2D730252EA599DD2()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_METHOD_1_2D730252EA599DD2_OFFSET))(this);
	}

	::System::Boolean Method_1_E091A92EA4DC55B8(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_METHOD_1_E091A92EA4DC55B8_OFFSET))(this, a1, a2);
	}

	::MoleMole::Config::BuffGroupName Method_1_CC0163455123FB24()
	{
		return ((::MoleMole::Config::BuffGroupName(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_112D26EBCB706216_METHOD_1_CC0163455123FB24_OFFSET))(this);
	}
};
