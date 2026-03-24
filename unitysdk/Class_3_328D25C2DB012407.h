#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_0F138252A5783001.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::Config { class DynamicFloat; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define CLASS_3_328D25C2DB012407_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x608B950)
#define CLASS_3_328D25C2DB012407_FROMFLX_OFFSET UNITYSDK_OFFSET(0x608BEA0)
#define CLASS_3_328D25C2DB012407_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0x608C430)
#define CLASS_3_328D25C2DB012407_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0x608C2D0)
#define CLASS_3_328D25C2DB012407_METHOD_3_AB36750697462AE2_OFFSET UNITYSDK_OFFSET(0x608BC70)
#define CLASS_3_328D25C2DB012407_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x608BD70)
#define CLASS_3_328D25C2DB012407_METHOD_3_D48F6ED8C47DDD04_OFFSET UNITYSDK_OFFSET(0x608BC00)
#define CLASS_3_328D25C2DB012407_METHOD_3_DF413489329CBAF8_OFFSET UNITYSDK_OFFSET(0x608BF20)
#define CLASS_3_328D25C2DB012407_METHOD_3_F1153A4377815E0F_OFFSET UNITYSDK_OFFSET(0x608B9B0)
#define CLASS_3_328D25C2DB012407__CTOR_OFFSET UNITYSDK_OFFSET(0x608C2C0)

inline static constexpr unsigned int Class_3_328D25C2DB012407_TypeDefinitionIndex = 38624;

class Class_3_328D25C2DB012407 : public ::Class_2_0F138252A5783001
{
public:
	::MoleMole::Config::DynamicFloat* Field_3_1; // 0x20
	::MoleMole::Config::DynamicFloat* Field_3_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407__CTOR_OFFSET))(this);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_D48F6ED8C47DDD04(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407_METHOD_3_D48F6ED8C47DDD04_OFFSET))(this, a1);
	}

	::Class_2_0F138252A5783001* Method_3_AB36750697462AE2()
	{
		return ((::Class_2_0F138252A5783001*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407_METHOD_3_AB36750697462AE2_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407_FROMFLX_OFFSET))(this, a1);
	}

	static ::Class_3_328D25C2DB012407* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_328D25C2DB012407*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}

	::System::Boolean Method_3_F1153A4377815E0F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407_METHOD_3_F1153A4377815E0F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_DF413489329CBAF8(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407_METHOD_3_DF413489329CBAF8_OFFSET))(this, a1);
	}

	static ::Class_3_328D25C2DB012407* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_328D25C2DB012407*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_328D25C2DB012407_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}
};
