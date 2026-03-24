#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8088D8743C1058EF.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/Struct_2_2EF7AC7A6C04963E.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_1_ED5EE319EA265EB6;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_2AEDC13E679EA200_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x671F4A0)
#define CLASS_2_2AEDC13E679EA200_FROMFLX_OFFSET UNITYSDK_OFFSET(0x671EDD0)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x671FA90)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_4857357D5C1BFCE8_OFFSET UNITYSDK_OFFSET(0x671D850)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_4E5AC15A8307DCD8_OFFSET UNITYSDK_OFFSET(0x671EE50)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x671ECA0)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_BCCAB6158AD8296E_OFFSET UNITYSDK_OFFSET(0x671EB10)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x671FA30)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x671F8D0)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x671EBA0)
#define CLASS_2_2AEDC13E679EA200_METHOD_2_E6899EA6AE497B7E_OFFSET UNITYSDK_OFFSET(0x671F500)
#define CLASS_2_2AEDC13E679EA200__CTOR_OFFSET UNITYSDK_OFFSET(0x671F870)

inline static constexpr unsigned int Class_2_2AEDC13E679EA200_TypeDefinitionIndex = 47825;

class Class_2_2AEDC13E679EA200 : public ::Class_1_8088D8743C1058EF
{
public:
	::Struct_2_2EF7AC7A6C04963E<::System::String*> Field_2_0; // 0x30
	::Class_1_ED5EE319EA265EB6* Field_2_2; // 0x50
	::Struct_2_2EF7AC7A6C04963E<::UnityEngine::Vector3> Field_2_1; // 0x58
	::System::Boolean Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_4857357D5C1BFCE8()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_4857357D5C1BFCE8_OFFSET))(this);
	}

	::System::Void Method_2_BCCAB6158AD8296E(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_BCCAB6158AD8296E_OFFSET))(this, a1);
	}

	::Class_1_8088D8743C1058EF* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_8088D8743C1058EF*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_4E5AC15A8307DCD8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_4E5AC15A8307DCD8_OFFSET))(this, a1);
	}

	static ::Class_2_2AEDC13E679EA200* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_2AEDC13E679EA200*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}

	::System::Void Method_2_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_CA373AA1C7054598_OFFSET))(this);
	}

	::System::Boolean Method_2_E6899EA6AE497B7E(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_E6899EA6AE497B7E_OFFSET))(this, a1, a2);
	}

	static ::Class_2_2AEDC13E679EA200* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_2AEDC13E679EA200*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_2AEDC13E679EA200_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}
};
