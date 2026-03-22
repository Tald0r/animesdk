#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ConfigViewObjectTraitBase.h"

class Class_1_236FD73ABC492E3F;
class Class_1_9BBA877A0A83A422;
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_2_3B7C01C0DB26251F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x761FED0)
#define CLASS_2_3B7C01C0DB26251F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x761FC50)
#define CLASS_2_3B7C01C0DB26251F_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x7620260)
#define CLASS_2_3B7C01C0DB26251F_METHOD_2_157E312840A3BD00_OFFSET UNITYSDK_OFFSET(0x761FF30)
#define CLASS_2_3B7C01C0DB26251F_METHOD_2_18ABA27B5DEF4779_OFFSET UNITYSDK_OFFSET(0x7620190)
#define CLASS_2_3B7C01C0DB26251F_METHOD_2_1D2F15E1636AC595_OFFSET UNITYSDK_OFFSET(0x761FA20)
#define CLASS_2_3B7C01C0DB26251F_METHOD_2_2A6B87C525933554_OFFSET UNITYSDK_OFFSET(0x7620410)
#define CLASS_2_3B7C01C0DB26251F_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x761FCD0)
#define CLASS_2_3B7C01C0DB26251F_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x761FB20)
#define CLASS_2_3B7C01C0DB26251F_METHOD_2_B73F62522113F21F_OFFSET UNITYSDK_OFFSET(0x761F9D0)
#define CLASS_2_3B7C01C0DB26251F_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x7620480)
#define CLASS_2_3B7C01C0DB26251F__CTOR_OFFSET UNITYSDK_OFFSET(0x7620250)

inline static constexpr unsigned int Class_2_3B7C01C0DB26251F_TypeDefinitionIndex = 72621;

class Class_2_3B7C01C0DB26251F : public ::MoleMole::Config::ConfigViewObjectTraitBase
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B73F62522113F21F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_METHOD_2_B73F62522113F21F_OFFSET))(this, a1);
	}

	::MoleMole::Config::ConfigViewObjectTraitBase* Method_2_1D2F15E1636AC595()
	{
		return ((::MoleMole::Config::ConfigViewObjectTraitBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_METHOD_2_1D2F15E1636AC595_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_18ABA27B5DEF4779(::Class_1_9BBA877A0A83A422* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_METHOD_2_18ABA27B5DEF4779_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	static ::Class_2_3B7C01C0DB26251F* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_3B7C01C0DB26251F*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_2A6B87C525933554(::Class_1_9BBA877A0A83A422* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_9BBA877A0A83A422*))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_METHOD_2_2A6B87C525933554_OFFSET))(this, a1);
	}

	static ::Class_2_3B7C01C0DB26251F* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_3B7C01C0DB26251F*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Boolean Method_2_157E312840A3BD00(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_3B7C01C0DB26251F_METHOD_2_157E312840A3BD00_OFFSET))(this, a1, a2);
	}
};
