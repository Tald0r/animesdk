#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_BC82EF9085BE2056.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowChessboardUID.h"

class Class_1_96CADDC2F8107977;
class Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D;
class Class_4_5F080D5A9512F654;
namespace MoleMole::HollowChessboard { class HollowEntity; }
namespace Nap::NapECS { class EcsComponent; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_4_20A2AD25A7FD65FB_METHOD_4_027F52F31B8785A0_OFFSET UNITYSDK_OFFSET(0xA8A5770)
#define CLASS_4_20A2AD25A7FD65FB_METHOD_4_0C3969727BAF79AB_OFFSET UNITYSDK_OFFSET(0xA8A4C50)
#define CLASS_4_20A2AD25A7FD65FB_METHOD_4_1B633966DF2939D3_OFFSET UNITYSDK_OFFSET(0xA8A49A0)
#define CLASS_4_20A2AD25A7FD65FB_METHOD_4_1BBB0C1B5609578E_OFFSET UNITYSDK_OFFSET(0xA8A5330)
#define CLASS_4_20A2AD25A7FD65FB_METHOD_4_622E8E401479F0C6_OFFSET UNITYSDK_OFFSET(0xA86BCC0)
#define CLASS_4_20A2AD25A7FD65FB_METHOD_4_90623D0365D3FAE0_OFFSET UNITYSDK_OFFSET(0xA8A50C0)
#define CLASS_4_20A2AD25A7FD65FB_METHOD_4_9A46CEFD931F7AF5_OFFSET UNITYSDK_OFFSET(0xA8A4EC0)
#define CLASS_4_20A2AD25A7FD65FB__CTOR_OFFSET UNITYSDK_OFFSET(0xA8A4B70)

inline static constexpr unsigned int Class_4_20A2AD25A7FD65FB_TypeDefinitionIndex = 62734;

class Class_4_20A2AD25A7FD65FB : public ::Class_3_BC82EF9085BE2056
{
public:
	::Class_1_96CADDC2F8107977* Field_4_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_20A2AD25A7FD65FB__CTOR_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>* Method_4_1B633966DF2939D3()
	{
		return ((::System::Collections::Generic::List_1<::Nap::NapECS::EcsComponent*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_20A2AD25A7FD65FB_METHOD_4_1B633966DF2939D3_OFFSET))(this);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_0C3969727BAF79AB(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_4_20A2AD25A7FD65FB_METHOD_4_0C3969727BAF79AB_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_90623D0365D3FAE0(::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D* a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::Class_2_CB2509659DB8C6AA_Class_1_835CE1B9F952177D*))((::PBYTE)hIl2Cpp + CLASS_4_20A2AD25A7FD65FB_METHOD_4_90623D0365D3FAE0_OFFSET))(this, a1);
	}

	::MoleMole::HollowChessboard::HollowEntity* Method_4_9A46CEFD931F7AF5(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::MoleMole::HollowChessboard::HollowEntity*(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_20A2AD25A7FD65FB_METHOD_4_9A46CEFD931F7AF5_OFFSET))(this, a1);
	}

	::System::Void Method_4_1BBB0C1B5609578E(::MoleMole::HollowChessboard::HollowChessboardUID a1, ::MoleMole::HollowChessboard::HollowEntity* a2, ::Class_4_5F080D5A9512F654* a3)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID, ::MoleMole::HollowChessboard::HollowEntity*, ::Class_4_5F080D5A9512F654*))((::PBYTE)hIl2Cpp + CLASS_4_20A2AD25A7FD65FB_METHOD_4_1BBB0C1B5609578E_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_4_622E8E401479F0C6(::MoleMole::HollowChessboard::HollowChessboardUID a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::HollowChessboard::HollowChessboardUID))((::PBYTE)hIl2Cpp + CLASS_4_20A2AD25A7FD65FB_METHOD_4_622E8E401479F0C6_OFFSET))(this, a1);
	}

	::System::Void Method_4_027F52F31B8785A0(::MoleMole::HollowChessboard::HollowEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::HollowChessboard::HollowEntity*))((::PBYTE)hIl2Cpp + CLASS_4_20A2AD25A7FD65FB_METHOD_4_027F52F31B8785A0_OFFSET))(this, a1);
	}
};
