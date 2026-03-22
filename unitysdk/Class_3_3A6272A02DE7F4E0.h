#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_F3CFF1AFF7EE7DCD.h"
#include "unitysdk/Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD.h"
#include "unitysdk/Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD_1.h"
#include "unitysdk/Enum_3_57DC80FD7B2B919F.h"
#include "unitysdk/Enum_3_F35877FFFA87A474.h"
#include "unitysdk/Foundation/Tuple_2.h"
#include "unitysdk/MoleMole/Config/CampType.h"
#include "unitysdk/MoleMole/Config/ConfigEntityAnimEventProtection.h"
#include "unitysdk/Struct_2_6059FFC6BC18379C.h"
#include "unitysdk/Struct_2_6F6D3F7A79E99D9C.h"
#include "unitysdk/UnityEngine/AnimatorStateInfo.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_97373C8E056325F8;
class Class_2_0206DD479BB5C906;
class Class_2_131E282CCAEB876E;
class Class_2_EA1C4A1A308E269F;
class Class_2_EF1D28F8618171F3;
class SpRecoverData;
namespace MoleMole { template <typename T1, typename T2> class TwoDiffValue_2; }
namespace MoleMole { template <typename T> class TwoValue_1; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { template <typename T1, typename T2, typename T3> class Action_3; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_3_3A6272A02DE7F4E0_GETCLASSID_OFFSET UNITYSDK_OFFSET(0x923ECF0)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_1808E1CF7A125519_1_OFFSET UNITYSDK_OFFSET(0x923F720)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_1808E1CF7A125519_2_OFFSET UNITYSDK_OFFSET(0x923F8D0)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_1808E1CF7A125519_OFFSET UNITYSDK_OFFSET(0x923F000)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_2569DDB5EC2D48A1_OFFSET UNITYSDK_OFFSET(0x923F9F0)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_725C3DBC4036E36E_OFFSET UNITYSDK_OFFSET(0x923F090)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_79191CEF07DDC606_OFFSET UNITYSDK_OFFSET(0x923F970)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_9EF9C001BE59FEBE_OFFSET UNITYSDK_OFFSET(0x923F850)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x923F860)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x923F8C0)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x923F960)
#define CLASS_3_3A6272A02DE7F4E0_METHOD_3_CCBE730AF445BBD4_OFFSET UNITYSDK_OFFSET(0x923F7B0)
#define CLASS_3_3A6272A02DE7F4E0_ONCLEAN_OFFSET UNITYSDK_OFFSET(0x923E260)
#define CLASS_3_3A6272A02DE7F4E0__CCTOR_OFFSET UNITYSDK_OFFSET(0x923ED50)
#define CLASS_3_3A6272A02DE7F4E0__CTOR_OFFSET UNITYSDK_OFFSET(0x923EDD0)

inline static constexpr unsigned int Class_3_3A6272A02DE7F4E0_TypeDefinitionIndex = 45227;

class Class_3_3A6272A02DE7F4E0 : public ::Class_2_F3CFF1AFF7EE7DCD
{
public:
	// static const ::System::Int32 Field_3_49 = 0x16; // 0x0
	::System::Action_2<::Class_2_EF1D28F8618171F3*, ::MoleMole::Battle::Entity*>* Field_3_27; // 0x48
	::System::Action_1<::SpRecoverData*>* Field_3_29; // 0x50
	::MoleMole::TwoValue_1<::System::Int32>* Field_3_20; // 0x58
	::Class_2_EA1C4A1A308E269F* Field_3_46; // 0x60
	::System::Collections::Generic::List_1<::Struct_2_6F6D3F7A79E99D9C>* Field_3_41; // 0x68
	::System::Collections::Generic::Dictionary_2<::Enum_3_57DC80FD7B2B919F, ::Class_2_EA1C4A1A308E269F*>* Field_3_16; // 0x70
	::System::Collections::Generic::List_1<::Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD>* Field_3_36; // 0x78
	::System::Collections::Generic::List_1<::System::String*>* Field_3_15; // 0x80
	::Class_2_EA1C4A1A308E269F* Field_3_33; // 0x88
	::System::Collections::Generic::Dictionary_2<::Enum_3_57DC80FD7B2B919F, ::Class_2_EA1C4A1A308E269F*>* Field_3_17; // 0x90
	::Class_2_0206DD479BB5C906* Field_3_43; // 0x98
	::Class_2_0206DD479BB5C906* Field_3_44; // 0xA0
	::System::Collections::Generic::List_1<::MoleMole::Config::ConfigEntityAnimEventProtection>* Field_3_24; // 0xA8
	::System::Action* Field_3_31; // 0xB0
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::Class_1_97373C8E056325F8*>* Field_3_26; // 0xB8
	::System::Action_2<::System::Boolean, ::Class_2_131E282CCAEB876E*>* Field_3_28; // 0xC0
	::System::Collections::Generic::HashSet_1<::System::String*>* Field_3_48; // 0xC8
	::System::String* Field_3_40; // 0xD0
	::Struct_2_6059FFC6BC18379C Field_3_12; // 0xD8
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::HashSet_1<::System::Int32>*>* Field_3_25; // 0xE0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::Foundation::Tuple_2<::System::Collections::Generic::HashSet_1<::System::String*>*, ::System::Collections::Generic::HashSet_1<::System::String*>*>>* Field_3_23; // 0xE8
	::Class_2_EA1C4A1A308E269F* Field_3_34; // 0xF0
	::Class_2_0206DD479BB5C906* Field_3_42; // 0xF8
	::System::Collections::Generic::List_1<::MoleMole::TwoDiffValue_2<::System::Int32, ::System::Single>*>* Field_3_22; // 0x100
	::System::Action_1<::Class_2_131E282CCAEB876E*>* Field_3_32; // 0x108
	::System::Collections::Generic::HashSet_1<::System::UInt32>* Field_3_3; // 0x110
	::Class_2_EA1C4A1A308E269F* Field_3_45; // 0x118
	::System::String* Field_3_7; // 0x120
	::System::Action_3<::UnityEngine::AnimatorStateInfo, ::UnityEngine::AnimatorStateInfo, ::System::Int32>* Field_3_30; // 0x128
	::System::Collections::Generic::List_1<::Class_3_627BDECF488D9EB4_Struct_2_BDC94D833C2F65AD_1>* Field_3_37; // 0x130
	::System::UInt32 Field_3_1; // 0x138
	::System::Boolean Field_3_13; // 0x13C
	::System::Boolean Field_3_38; // 0x13D
	::System::Boolean Field_3_35; // 0x13E
	::System::Boolean Field_3_10; // 0x13F
	::Enum_3_F35877FFFA87A474 Field_3_0; // 0x140
	::System::Boolean Field_3_19; // 0x144
	::System::Int32 Field_3_47; // 0x148
	::System::Single Field_3_39; // 0x14C
	::System::UInt32 Field_3_14; // 0x150
	::MoleMole::Config::CampType _campType; // 0x154
	::System::Boolean Field_3_4; // 0x158
	::System::Boolean Field_3_18; // 0x159
	::System::Boolean Field_3_21; // 0x15A
	::System::Boolean Field_3_6; // 0x15B
	::System::Int32 Field_3_8; // 0x15C
	::System::UInt32 Field_3_2; // 0x160
	::UnityEngine::Vector3 Field_3_11; // 0x164
	::System::Int32 Field_3_9; // 0x170

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0__CCTOR_OFFSET))();
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0__CTOR_OFFSET))(this);
	}

	::System::Void OnClean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_ONCLEAN_OFFSET))(this);
	}

	::System::Int32 GetClassID()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_GETCLASSID_OFFSET))(this);
	}

	::System::Boolean Method_3_1808E1CF7A125519()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_1808E1CF7A125519_OFFSET))(this);
	}

	::System::Void Method_3_725C3DBC4036E36E(::System::UInt32 a1, ::MoleMole::Config::CampType a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_725C3DBC4036E36E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_3_1808E1CF7A125519_1()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_1808E1CF7A125519_1_OFFSET))(this);
	}

	static ::Class_3_3A6272A02DE7F4E0* Method_3_CCBE730AF445BBD4()
	{
		return ((::Class_3_3A6272A02DE7F4E0*(*)())((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_CCBE730AF445BBD4_OFFSET))();
	}

	::MoleMole::Config::CampType Method_3_9EF9C001BE59FEBE()
	{
		return ((::MoleMole::Config::CampType(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_9EF9C001BE59FEBE_OFFSET))(this);
	}

	::System::Int32 Method_3_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_A1D8CD775DEC3C21_OFFSET))(this);
	}

	::System::Void Method_3_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Boolean Method_3_1808E1CF7A125519_2()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_1808E1CF7A125519_2_OFFSET))(this);
	}

	::System::Int32 Method_3_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_3_79191CEF07DDC606(::MoleMole::Config::CampType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_79191CEF07DDC606_OFFSET))(this, a1);
	}

	::System::Void Method_3_2569DDB5EC2D48A1(::MoleMole::Config::CampType a1)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::CampType))((::PBYTE)hIl2Cpp + CLASS_3_3A6272A02DE7F4E0_METHOD_3_2569DDB5EC2D48A1_OFFSET))(this, a1);
	}
};
