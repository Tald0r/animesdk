#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_D0D2B3C2533F6DF2_1.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"

class Class_1_236FD73ABC492E3F;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define CLASS_2_17751629051CED1F_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x8D55690)
#define CLASS_2_17751629051CED1F_FROMFLX_OFFSET UNITYSDK_OFFSET(0x8D55410)
#define CLASS_2_17751629051CED1F_METHOD_2_0B2CB6A77D912E66_OFFSET UNITYSDK_OFFSET(0x8D55B50)
#define CLASS_2_17751629051CED1F_METHOD_2_42E1B0366D8D72CF_OFFSET UNITYSDK_OFFSET(0x8D556F0)
#define CLASS_2_17751629051CED1F_METHOD_2_5B0202969299569F_OFFSET UNITYSDK_OFFSET(0x8D55490)
#define CLASS_2_17751629051CED1F_METHOD_2_96A53A17AC5D0E93_OFFSET UNITYSDK_OFFSET(0x8D553B0)
#define CLASS_2_17751629051CED1F_METHOD_2_B525722F60E6B94F_OFFSET UNITYSDK_OFFSET(0x8D55280)
#define CLASS_2_17751629051CED1F_METHOD_2_D4943D8F67F4699C_OFFSET UNITYSDK_OFFSET(0x8D55D70)
#define CLASS_2_17751629051CED1F_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET UNITYSDK_OFFSET(0x8D55130)
#define CLASS_2_17751629051CED1F_METHOD_2_D6D811AB473606F4_OFFSET UNITYSDK_OFFSET(0x8D55D00)
#define CLASS_2_17751629051CED1F_METHOD_2_D8A163211C06267F_OFFSET UNITYSDK_OFFSET(0x8D55180)
#define CLASS_2_17751629051CED1F_METHOD_2_D9B1238A52647AE8_OFFSET UNITYSDK_OFFSET(0x8D55880)
#define CLASS_2_17751629051CED1F__CTOR_OFFSET UNITYSDK_OFFSET(0x8D55B40)

inline static constexpr unsigned int Class_2_17751629051CED1F_TypeDefinitionIndex = 41065;

class Class_2_17751629051CED1F : public ::Class_1_D0D2B3C2533F6DF2_1
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D4ABEF7DE8CFDB8D(::System::Action_1<::System::Object*>* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_D4ABEF7DE8CFDB8D_OFFSET))(this, a1);
	}

	::Class_1_D0D2B3C2533F6DF2_1* Method_2_D8A163211C06267F()
	{
		return ((::Class_1_D0D2B3C2533F6DF2_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_D8A163211C06267F_OFFSET))(this);
	}

	::System::Int32 Method_2_B525722F60E6B94F()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_B525722F60E6B94F_OFFSET))(this);
	}

	::System::Void Method_2_96A53A17AC5D0E93()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_96A53A17AC5D0E93_OFFSET))(this);
	}

	::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_FROMFLX_OFFSET))(this, a1);
	}

	::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_FROMBINARY_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D9B1238A52647AE8(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_D9B1238A52647AE8_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_5B0202969299569F(::FlexBuffers::FlxMap a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_5B0202969299569F_OFFSET))(this, a1);
	}

	static ::Class_2_17751629051CED1F* Method_2_0B2CB6A77D912E66(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::Class_2_17751629051CED1F*(*)(::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_0B2CB6A77D912E66_OFFSET))(a1, a2);
	}

	::System::Boolean Method_2_42E1B0366D8D72CF(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_42E1B0366D8D72CF_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_D6D811AB473606F4(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_D6D811AB473606F4_OFFSET))(this, a1);
	}

	static ::Class_2_17751629051CED1F* Method_2_D4943D8F67F4699C(::FlexBuffers::FlxValue a1)
	{
		return ((::Class_2_17751629051CED1F*(*)(::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + CLASS_2_17751629051CED1F_METHOD_2_D4943D8F67F4699C_OFFSET))(a1);
	}
};
