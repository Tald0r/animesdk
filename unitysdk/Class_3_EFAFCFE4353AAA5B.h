#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_609A6F413CDA42FB.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
class Class_1_2AD981AB6ACE5E06_1;
class Class_1_6C2316E239372B31;
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define CLASS_3_EFAFCFE4353AAA5B_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xA0613F0)
#define CLASS_3_EFAFCFE4353AAA5B_FROMFLX_OFFSET UNITYSDK_OFFSET(0xA05FDE0)
#define CLASS_3_EFAFCFE4353AAA5B_METHOD_3_147377F29C401A8D_OFFSET UNITYSDK_OFFSET(0xA061F20)
#define CLASS_3_EFAFCFE4353AAA5B_METHOD_3_2D8111E2FEBA9337_OFFSET UNITYSDK_OFFSET(0xA061F00)
#define CLASS_3_EFAFCFE4353AAA5B_METHOD_3_4B2A55B54410AF3F_OFFSET UNITYSDK_OFFSET(0xA05FA90)
#define CLASS_3_EFAFCFE4353AAA5B_METHOD_3_7DB601338350FF7F_OFFSET UNITYSDK_OFFSET(0xA061450)
#define CLASS_3_EFAFCFE4353AAA5B_METHOD_3_82A3EC7819F9DAA7_OFFSET UNITYSDK_OFFSET(0xA05FE60)
#define CLASS_3_EFAFCFE4353AAA5B_METHOD_3_8AF11A4113B593B4_OFFSET UNITYSDK_OFFSET(0xA061EF0)
#define CLASS_3_EFAFCFE4353AAA5B_METHOD_3_979D2C8BE7EA3C3D_OFFSET UNITYSDK_OFFSET(0xA0620D0)
#define CLASS_3_EFAFCFE4353AAA5B_METHOD_3_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0xA05FCB0)
#define CLASS_3_EFAFCFE4353AAA5B_METHOD_3_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0xA05FBB0)
#define CLASS_3_EFAFCFE4353AAA5B__CTOR_OFFSET UNITYSDK_OFFSET(0xA061F10)

inline static constexpr unsigned int Class_3_EFAFCFE4353AAA5B_TypeDefinitionIndex = 65463;

class Class_3_EFAFCFE4353AAA5B : public ::Class_2_609A6F413CDA42FB
{
public:
	::Il2CppArray<::System::Int32>* Field_3_4; // 0x28
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_6; // 0x30
	::Il2CppArray<::System::Int32>* Field_3_2; // 0x38
	::Il2CppArray<::System::Int32>* Field_3_1; // 0x40
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Field_3_12; // 0x48
	::Il2CppArray<::Class_1_6C2316E239372B31*>* Field_3_13; // 0x50
	::Il2CppArray<::System::Int32>* Field_3_3; // 0x58
	::Il2CppArray<::System::String*>* Field_3_8; // 0x60
	::System::Int32 Field_3_5; // 0x68
	::System::Int32 Field_3_9; // 0x6C
	::System::Int32 Field_3_11; // 0x70
	::System::Int32 Field_3_0; // 0x74
	::System::Int32 Field_3_7; // 0x78
	::System::Int32 Field_3_10; // 0x7C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_4B2A55B54410AF3F(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_METHOD_3_4B2A55B54410AF3F_OFFSET))(this, a1);
	}

	::Class_1_2AD981AB6ACE5E06_1* Method_3_D8A163211C06267F()
	{
		return ((::Class_1_2AD981AB6ACE5E06_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_METHOD_3_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_3_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_METHOD_3_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* Method_3_8AF11A4113B593B4()
	{
		return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_METHOD_3_8AF11A4113B593B4_OFFSET))(this);
	}

	::Il2CppArray<::Class_1_6C2316E239372B31*>* Method_3_2D8111E2FEBA9337()
	{
		return ((::Il2CppArray<::Class_1_6C2316E239372B31*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_METHOD_3_2D8111E2FEBA9337_OFFSET))(this);
	}

	static ::Class_3_EFAFCFE4353AAA5B* Method_3_147377F29C401A8D(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_3_EFAFCFE4353AAA5B*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_METHOD_3_147377F29C401A8D_OFFSET))(a1, a2);
	}

	::System::Boolean Method_3_7DB601338350FF7F(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_METHOD_3_7DB601338350FF7F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_82A3EC7819F9DAA7(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_METHOD_3_82A3EC7819F9DAA7_OFFSET))(this, a1);
	}

	static ::Class_3_EFAFCFE4353AAA5B* Method_3_979D2C8BE7EA3C3D(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_3_EFAFCFE4353AAA5B*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_3_EFAFCFE4353AAA5B_METHOD_3_979D2C8BE7EA3C3D_OFFSET))(a1);
	}
};
