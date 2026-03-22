#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_ED8C6A078782733C.h"
#include "unitysdk/MoleMole/Config/TeleportSelectionType.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/Struct_2_029BEC9C30EBC3F1.h"
#include "unitysdk/Struct_2_5CD5746115B795BD.h"
#include "unitysdk/Struct_2_E5EB8DF54D830C11.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Profiling/ProfilerMarker.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_8A0D924C14430663;
class Class_2_77C32C73240ECEFE;
namespace MoleMole { class AvatarInitData; }
namespace MoleMole::Battle { class Entity; }
namespace System { class Action; }
namespace System { class String; }
namespace System { class Type; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CLASS_1_11BA983C28DB205D_METHOD_1_BD0EF31BAC562515_OFFSET UNITYSDK_OFFSET(0xDE72140)
#define CLASS_1_11BA983C28DB205D_METHOD_1_CE34EA208837238D_OFFSET UNITYSDK_OFFSET(0xDE72250)
#define CLASS_1_11BA983C28DB205D_METHOD_1_F730968E2645E14B_OFFSET UNITYSDK_OFFSET(0xDE720B0)
#define CLASS_1_11BA983C28DB205D__CCTOR_OFFSET UNITYSDK_OFFSET(0xDE71450)
#define CLASS_1_11BA983C28DB205D__CTOR_OFFSET UNITYSDK_OFFSET(0xDE71440)

inline static constexpr unsigned int Class_1_11BA983C28DB205D_TypeDefinitionIndex = 79140;

class Class_1_11BA983C28DB205D : public ::System::Object
{
public:
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_50()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C360);
	}
	static ::System::Collections::Generic::List_1<::Class_2_77C32C73240ECEFE*>** StaticGet_Field_1_0()
	{
		return (::System::Collections::Generic::List_1<::Class_2_77C32C73240ECEFE*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C368);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_52()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C370);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action*>** StaticGet_Field_1_69()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Action*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C378);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_42()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C380);
	}
	static ::System::String** StaticGet_Field_1_154()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C388);
	}
	static ::Class_1_8A0D924C14430663** StaticGet_Field_1_33()
	{
		return (::Class_1_8A0D924C14430663**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C390);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_88()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C398);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_13()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3A0);
	}
	static ::System::String** StaticGet_Field_1_77()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3A8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_46()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3B0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_7()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3B8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_57()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3C0);
	}
	static ::System::Collections::Generic::Dictionary_2<::Enum_3_ED8C6A078782733C, ::System::Boolean>** StaticGet_Field_1_9()
	{
		return (::System::Collections::Generic::Dictionary_2<::Enum_3_ED8C6A078782733C, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3C8);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>** StaticGet_Field_1_63()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3D0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_85()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3D8);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_20()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3E0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_96()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3E8);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_029BEC9C30EBC3F1>** StaticGet_Field_1_32()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_029BEC9C30EBC3F1>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3F0);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_44()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C3F8);
	}
	static ::System::String** StaticGet_Field_1_155()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C400);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::EntityHandle>** StaticGet_Field_1_130()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::EntityHandle>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C408);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_1()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C410);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_94()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C418);
	}
	static ::System::String** StaticGet_Field_1_30()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C420);
	}
	static ::System::Collections::Generic::List_1<::Struct_2_5CD5746115B795BD>** StaticGet_Field_1_31()
	{
		return (::System::Collections::Generic::List_1<::Struct_2_5CD5746115B795BD>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C428);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_25()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C430);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_75()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C438);
	}
	static ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>** StaticGet_Field_1_60()
	{
		return (::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C440);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>** StaticGet_Field_1_61()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::Boolean>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C448);
	}
	static ::MoleMole::AvatarInitData** StaticGet_Field_1_156()
	{
		return (::MoleMole::AvatarInitData**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C450);
	}
	static ::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>** StaticGet_Field_1_62()
	{
		return (::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Collections::Generic::List_1<::System::String*>*>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x2C458);
	}
	static ::System::Boolean* StaticGet_Field_1_4()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE0);
	}
	static ::System::Boolean* StaticGet_Field_1_91()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE1);
	}
	static ::System::Boolean* StaticGet_Field_1_54()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE2);
	}
	static ::System::Boolean* StaticGet_Field_1_136()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE3);
	}
	static ::System::Boolean* StaticGet_Field_1_157()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE4);
	}
	static ::System::Boolean* StaticGet_Field_1_140()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE5);
	}
	static ::System::Boolean* StaticGet_Field_1_113()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE6);
	}
	static ::System::Boolean* StaticGet_Field_1_68()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE7);
	}
	static ::System::Boolean* StaticGet_Field_1_66()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE8);
	}
	static ::System::Boolean* StaticGet_Field_1_71()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FE9);
	}
	static ::System::Boolean* StaticGet_Field_1_86()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FEA);
	}
	static ::System::Boolean* StaticGet_Field_1_26()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FEB);
	}
	static ::System::Boolean* StaticGet_Field_1_27()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FEC);
	}
	static ::System::Boolean* StaticGet_Field_1_134()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FED);
	}
	static ::System::Boolean* StaticGet_Field_1_143()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FEE);
	}
	static ::System::Boolean* StaticGet_Field_1_51()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FEF);
	}
	static ::System::Int32* StaticGet_Field_1_111()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FF0);
	}
	static ::System::Boolean* StaticGet_Field_1_49()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FF4);
	}
	static ::System::Boolean* StaticGet_Field_1_119()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FF5);
	}
	static ::System::Boolean* StaticGet_Field_1_141()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FF6);
	}
	static ::System::Boolean* StaticGet_Field_1_65()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FF7);
	}
	static ::System::Boolean* StaticGet_Field_1_123()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FF8);
	}
	static ::System::Boolean* StaticGet_Field_1_128()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FF9);
	}
	static ::System::Boolean* StaticGet_Field_1_41()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FFA);
	}
	static ::System::Boolean* StaticGet_Field_1_95()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FFB);
	}
	static ::System::Boolean* StaticGet_Field_1_29()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FFC);
	}
	static ::System::Boolean* StaticGet_Field_1_28()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FFD);
	}
	static ::System::Boolean* StaticGet_Field_1_59()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FFE);
	}
	static ::System::Boolean* StaticGet_Field_1_39()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0x9FFF);
	}
	static ::System::UInt32* StaticGet_Field_1_23()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA000);
	}
	static ::System::Boolean* StaticGet_Field_1_89()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA004);
	}
	static ::System::Boolean* StaticGet_Field_1_92()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA005);
	}
	static ::System::Boolean* StaticGet_Field_1_97()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA006);
	}
	static ::System::Boolean* StaticGet_Field_1_133()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA007);
	}
	static ::System::Boolean* StaticGet_Field_1_127()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA008);
	}
	static ::System::Boolean* StaticGet_Field_1_43()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA009);
	}
	static ::System::Boolean* StaticGet_Field_1_72()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA00A);
	}
	static ::System::Boolean* StaticGet_Field_1_129()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA00B);
	}
	static ::System::Boolean* StaticGet_Field_1_19()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA00C);
	}
	static ::System::Boolean* StaticGet_Field_1_47()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA00D);
	}
	static ::System::Boolean* StaticGet_Field_1_126()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA00E);
	}
	static ::System::Boolean* StaticGet_Field_1_93()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA00F);
	}
	static ::Struct_2_E5EB8DF54D830C11* StaticGet_Field_1_40()
	{
		return (::Struct_2_E5EB8DF54D830C11*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA010);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_150()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA038);
	}
	static ::System::Boolean* StaticGet_Field_1_138()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA040);
	}
	static ::System::Boolean* StaticGet_Field_1_6()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA041);
	}
	static ::System::Boolean* StaticGet_Field_1_114()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA042);
	}
	static ::System::Boolean* StaticGet_Field_1_48()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA043);
	}
	static ::System::Boolean* StaticGet_Field_1_37()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA044);
	}
	static ::System::Boolean* StaticGet_Field_1_82()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA045);
	}
	static ::System::Boolean* StaticGet_Field_1_79()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA046);
	}
	static ::System::Boolean* StaticGet_Field_1_100()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA047);
	}
	static ::System::Boolean* StaticGet_Field_1_84()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA048);
	}
	static ::System::Boolean* StaticGet_Field_1_56()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA049);
	}
	static ::System::Boolean* StaticGet_Field_1_35()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA04A);
	}
	static ::System::Boolean* StaticGet_Field_1_78()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA04B);
	}
	static ::MoleMole::Config::TeleportSelectionType* StaticGet_Field_1_152()
	{
		return (::MoleMole::Config::TeleportSelectionType*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA04C);
	}
	static ::System::Boolean* StaticGet_Field_1_74()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA050);
	}
	static ::System::Boolean* StaticGet_Field_1_137()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA051);
	}
	static ::System::Boolean* StaticGet_Field_1_115()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA052);
	}
	static ::System::Boolean* StaticGet_Field_1_135()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA053);
	}
	static ::System::Boolean* StaticGet_Field_1_98()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA054);
	}
	static ::System::Boolean* StaticGet_Field_1_99()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA055);
	}
	static ::System::Boolean* StaticGet_Field_1_132()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA056);
	}
	static ::System::Boolean* StaticGet_Field_1_101()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA057);
	}
	static ::System::Boolean* StaticGet_Field_1_102()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA058);
	}
	static ::System::Boolean* StaticGet_Field_1_16()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA059);
	}
	static ::System::Boolean* StaticGet_Field_1_34()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA05A);
	}
	static ::System::Boolean* StaticGet_Field_1_14()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA05B);
	}
	static ::System::Boolean* StaticGet_Field_1_117()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA05C);
	}
	static ::System::Boolean* StaticGet_Field_1_146()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA05D);
	}
	static ::System::Boolean* StaticGet_Field_1_38()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA05E);
	}
	static ::System::Boolean* StaticGet_Field_1_76()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA05F);
	}
	static ::UnityEngine::Vector2* StaticGet_Field_1_108()
	{
		return (::UnityEngine::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA060);
	}
	static ::System::Boolean* StaticGet_Field_1_122()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA068);
	}
	static ::System::Boolean* StaticGet_Field_1_3()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA069);
	}
	static ::System::Boolean* StaticGet_Field_1_110()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA06A);
	}
	static ::System::Boolean* StaticGet_Field_1_8()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA06B);
	}
	static ::System::Boolean* StaticGet_Field_1_55()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA06C);
	}
	static ::System::Boolean* StaticGet_Field_1_45()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA06D);
	}
	static ::System::Boolean* StaticGet_Field_1_142()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA06E);
	}
	static ::System::Boolean* StaticGet_Field_1_104()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA06F);
	}
	static ::System::Boolean* StaticGet_Field_1_125()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA070);
	}
	static ::System::Boolean* StaticGet_Field_1_24()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA071);
	}
	static ::System::Boolean* StaticGet_Field_1_64()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA072);
	}
	static ::System::Boolean* StaticGet_Field_1_83()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA073);
	}
	static ::System::Boolean* StaticGet_Field_1_2()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA074);
	}
	static ::System::Boolean* StaticGet_Field_1_105()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA075);
	}
	static ::System::Boolean* StaticGet_Field_1_67()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA076);
	}
	static ::System::Boolean* StaticGet_Field_1_145()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA077);
	}
	static ::System::Boolean* StaticGet_Field_1_121()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA078);
	}
	static ::System::Boolean* StaticGet_Field_1_58()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA079);
	}
	static ::System::Boolean* StaticGet_Field_1_18()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA07A);
	}
	static ::System::Boolean* StaticGet_Field_1_15()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA07B);
	}
	static ::System::Boolean* StaticGet_Field_1_106()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA07C);
	}
	static ::System::Boolean* StaticGet_Field_1_131()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA07D);
	}
	static ::System::Boolean* StaticGet_Field_1_22()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA07E);
	}
	static ::System::Boolean* StaticGet_Field_1_107()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA07F);
	}
	static ::System::Boolean* StaticGet_Field_1_21()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA080);
	}
	static ::System::Boolean* StaticGet_Field_1_11()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA081);
	}
	static ::System::Boolean* StaticGet_Field_1_153()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA082);
	}
	static ::System::Boolean* StaticGet_Field_1_80()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA083);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_148()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA088);
	}
	static ::System::Boolean* StaticGet_Field_1_87()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA090);
	}
	static ::System::Boolean* StaticGet_Field_1_70()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA091);
	}
	static ::System::Boolean* StaticGet_Field_1_124()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA092);
	}
	static ::System::Boolean* StaticGet_Field_1_53()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA093);
	}
	static ::System::Boolean* StaticGet_Field_1_144()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA094);
	}
	static ::System::Boolean* StaticGet_Field_1_17()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA095);
	}
	static ::System::Boolean* StaticGet_Field_1_81()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA096);
	}
	static ::System::Boolean* StaticGet_Field_1_151()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA097);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_147()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA098);
	}
	static ::System::Boolean* StaticGet_Field_1_12()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0A0);
	}
	static ::System::Boolean* StaticGet_Field_1_120()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0A1);
	}
	static ::System::Boolean* StaticGet_Field_1_103()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0A2);
	}
	static ::System::Boolean* StaticGet_Field_1_118()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0A3);
	}
	static ::System::Boolean* StaticGet_Field_1_73()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0A4);
	}
	static ::System::Boolean* StaticGet_Field_1_139()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0A5);
	}
	static ::System::Boolean* StaticGet_Field_1_10()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0A6);
	}
	static ::Unity::Profiling::ProfilerMarker* StaticGet_Field_1_149()
	{
		return (::Unity::Profiling::ProfilerMarker*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0A8);
	}
	static ::System::UInt32* StaticGet_Field_1_36()
	{
		return (::System::UInt32*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0B0);
	}
	static ::System::Boolean* StaticGet_Field_1_116()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0B4);
	}
	static ::System::Boolean* StaticGet_Field_1_90()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0B5);
	}
	static ::System::Boolean* StaticGet_Field_1_109()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0B6);
	}
	static ::System::Boolean* StaticGet_Field_1_112()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(Class_1_11BA983C28DB205D_TypeDefinitionIndex)->GetStaticField(0xA0B7);
	}
	// static const ::System::String* Field_1_5; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D__CCTOR_OFFSET))();
	}

	static ::System::Void Method_1_F730968E2645E14B()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D_METHOD_1_F730968E2645E14B_OFFSET))();
	}

	static ::System::Void Method_1_BD0EF31BAC562515(::System::Boolean a1)
	{
		return ((::System::Void(*)(::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D_METHOD_1_BD0EF31BAC562515_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_CE34EA208837238D()
	{
		return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + CLASS_1_11BA983C28DB205D_METHOD_1_CE34EA208837238D_OFFSET))();
	}
};
