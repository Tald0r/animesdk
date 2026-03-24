#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_92716080D9218E0F_Struct_2_D8F8874821A92FA0.h"
#include "unitysdk/Class_2_3344BB063BAF0A29_Struct_2_813E40854E4D2E88.h"
#include "unitysdk/Class_2_CCA2F740419298FF_Struct_2_F217B044B82B2397.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_11EF28CD9B0884A6;
class Class_1_B7E341C5F1A6F199;
class Class_2_DE63F91C3C802C47;
namespace FlowCanvas { class FlowGraph; }
namespace MoleMole { class BattleMapSubsystem; }
namespace MoleMole { class LevelSectionData; }
namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::Battle { class Entity; }
namespace ParadoxNotion::Serialization { class Graph_BinarySerializer_Setting_OptBool; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::AI { class NavMeshPath; }

#define CLASS_1_92716080D9218E0F_METHOD_1_1B8A8BFE66B17618_OFFSET UNITYSDK_OFFSET(0x82942D0)
#define CLASS_1_92716080D9218E0F_METHOD_1_1FAB1A8E4A51D239_OFFSET UNITYSDK_OFFSET(0x8295450)
#define CLASS_1_92716080D9218E0F_METHOD_1_34A3612A9C66AF54_OFFSET UNITYSDK_OFFSET(0x8290020)
#define CLASS_1_92716080D9218E0F_METHOD_1_4457EF6BE1C384D4_OFFSET UNITYSDK_OFFSET(0x828F8A0)
#define CLASS_1_92716080D9218E0F_METHOD_1_45818AAC0725FCC0_OFFSET UNITYSDK_OFFSET(0x8291680)
#define CLASS_1_92716080D9218E0F_METHOD_1_45BEFFB9ED0098F8_OFFSET UNITYSDK_OFFSET(0x828F7C0)
#define CLASS_1_92716080D9218E0F_METHOD_1_5B5919AE7ACB305A_OFFSET UNITYSDK_OFFSET(0x8295230)
#define CLASS_1_92716080D9218E0F_METHOD_1_659829BBADC69A0A_OFFSET UNITYSDK_OFFSET(0x8292CE0)
#define CLASS_1_92716080D9218E0F_METHOD_1_74505E341CB9A5FE_OFFSET UNITYSDK_OFFSET(0x8292EE0)
#define CLASS_1_92716080D9218E0F_METHOD_1_83DC4F554FEF4C02_OFFSET UNITYSDK_OFFSET(0x8295690)
#define CLASS_1_92716080D9218E0F_METHOD_1_99DFEC237ED4D3B7_OFFSET UNITYSDK_OFFSET(0x8294C80)
#define CLASS_1_92716080D9218E0F_METHOD_1_9BD1F6A143F8E629_OFFSET UNITYSDK_OFFSET(0x8293330)
#define CLASS_1_92716080D9218E0F_METHOD_1_9FF0EEFCECD978B9_OFFSET UNITYSDK_OFFSET(0x8294640)
#define CLASS_1_92716080D9218E0F_METHOD_1_A173315A4E1AD8C9_OFFSET UNITYSDK_OFFSET(0x8291540)
#define CLASS_1_92716080D9218E0F_METHOD_1_A3ABD2C5B5F29E79_OFFSET UNITYSDK_OFFSET(0x8294F10)
#define CLASS_1_92716080D9218E0F_METHOD_1_A619F2C440AEA422_OFFSET UNITYSDK_OFFSET(0x8292FD0)
#define CLASS_1_92716080D9218E0F_METHOD_1_BEEC9DA8C1501163_OFFSET UNITYSDK_OFFSET(0x8291980)
#define CLASS_1_92716080D9218E0F_METHOD_1_C533C7DDFD4DBBF1_OFFSET UNITYSDK_OFFSET(0x8291B10)
#define CLASS_1_92716080D9218E0F_METHOD_1_E50966C67B4A48EB_OFFSET UNITYSDK_OFFSET(0x82903D0)
#define CLASS_1_92716080D9218E0F_METHOD_1_ED098FF851499B2D_OFFSET UNITYSDK_OFFSET(0x8293E20)
#define CLASS_1_92716080D9218E0F_METHOD_1_F50EB7E373AC22C8_OFFSET UNITYSDK_OFFSET(0x8293150)
#define CLASS_1_92716080D9218E0F_METHOD_1_F72B6BAD25255846_OFFSET UNITYSDK_OFFSET(0x8290FD0)
#define CLASS_1_92716080D9218E0F__CCTOR_OFFSET UNITYSDK_OFFSET(0x828F6B0)

inline static constexpr unsigned int Class_1_92716080D9218E0F_TypeDefinitionIndex = 80201;

class Class_1_92716080D9218E0F : public ::System::Object
{
public:
	static ::UnityEngine::AI::NavMeshPath** StaticGet_Field_1_1()
	{
		return (::UnityEngine::AI::NavMeshPath**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92716080D9218E0F_TypeDefinitionIndex)->GetStaticField(0x30690);
	}
	static ::Il2CppArray<::UnityEngine::RaycastHit>** StaticGet_Field_1_3()
	{
		return (::Il2CppArray<::UnityEngine::RaycastHit>**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92716080D9218E0F_TypeDefinitionIndex)->GetStaticField(0x30698);
	}
	static ::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool** StaticGet_Field_1_4()
	{
		return (::ParadoxNotion::Serialization::Graph_BinarySerializer_Setting_OptBool**)Il2CppClass::FromTypeDefinitionIndex(Class_1_92716080D9218E0F_TypeDefinitionIndex)->GetStaticField(0x306A0);
	}
	static ::System::Char* StaticGet_Field_1_2()
	{
		return (::System::Char*)Il2CppClass::FromTypeDefinitionIndex(Class_1_92716080D9218E0F_TypeDefinitionIndex)->GetStaticField(0xBE60);
	}
	// static const ::System::String* Field_1_0; // 0x0

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F__CCTOR_OFFSET))();
	}

	static ::System::Single Method_1_45BEFFB9ED0098F8(::System::Single a1)
	{
		return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_45BEFFB9ED0098F8_OFFSET))(a1);
	}

	static ::System::String* Method_1_4457EF6BE1C384D4(::MoleMole::Battle::Entity* a1, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Boolean a6, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* a7)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_4457EF6BE1C384D4_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::MoleMole::MonoSpawnPoint* Method_1_E50966C67B4A48EB(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Collections::Generic::HashSet_1<::System::Int32>* a6, ::System::Boolean a7)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_E50966C67B4A48EB_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_45818AAC0725FCC0(::MoleMole::MonoSpawnPoint* a1, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoSpawnPoint*, ::System::Collections::Generic::List_1<::MoleMole::Battle::Entity*>*))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_45818AAC0725FCC0_OFFSET))(a1, a2);
	}

	static ::MoleMole::LevelSectionData* Method_1_BEEC9DA8C1501163(::Class_2_3344BB063BAF0A29_Struct_2_813E40854E4D2E88 a1, ::System::Boolean a2)
	{
		return ((::MoleMole::LevelSectionData*(*)(::Class_2_3344BB063BAF0A29_Struct_2_813E40854E4D2E88, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_BEEC9DA8C1501163_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_C533C7DDFD4DBBF1(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::FlowCanvas::FlowGraph* a6, ::System::Collections::Generic::HashSet_1<::System::Int32>* a7, ::System::Boolean& a8, ::System::Boolean a9, ::System::Boolean a10, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* a11)
	{
		return ((::System::String*(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Single, ::System::Single, ::System::Single, ::FlowCanvas::FlowGraph*, ::System::Collections::Generic::HashSet_1<::System::Int32>*, ::System::Boolean&, ::System::Boolean, ::System::Boolean, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_C533C7DDFD4DBBF1_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
	}

	static ::Class_2_DE63F91C3C802C47* Method_1_659829BBADC69A0A(::Class_1_11EF28CD9B0884A6* a1, ::System::Int32 a2)
	{
		return ((::Class_2_DE63F91C3C802C47*(*)(::Class_1_11EF28CD9B0884A6*, ::System::Int32))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_659829BBADC69A0A_OFFSET))(a1, a2);
	}

	static ::System::String* Method_1_74505E341CB9A5FE(::System::String* a1)
	{
		return ((::System::String*(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_74505E341CB9A5FE_OFFSET))(a1);
	}

	static ::MoleMole::MonoSpawnPoint* Method_1_A619F2C440AEA422(::System::Boolean a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::System::Boolean, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_A619F2C440AEA422_OFFSET))(a1, a2, a3);
	}

	static ::UnityEngine::Vector3 Method_1_F50EB7E373AC22C8(::System::String* a1)
	{
		return ((::UnityEngine::Vector3(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_F50EB7E373AC22C8_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_9BD1F6A143F8E629(::MoleMole::Battle::Entity* a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::System::String* a4, ::System::Boolean a5)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_9BD1F6A143F8E629_OFFSET))(a1, a2, a3, a4, a5);
	}

	static ::System::Int32 Method_1_34A3612A9C66AF54(::MoleMole::BattleMapSubsystem* a1, ::MoleMole::MonoSpawnPoint* a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::System::Single a5, ::System::Single a6, ::System::Single a7)
	{
		return ((::System::Int32(*)(::MoleMole::BattleMapSubsystem*, ::MoleMole::MonoSpawnPoint*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_34A3612A9C66AF54_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Void Method_1_F72B6BAD25255846(::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Vector3 a6, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*& a7)
	{
		return ((::System::Void(*)(::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*&))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_F72B6BAD25255846_OFFSET))(a1, a2, a3, a4, a5, a6, a7);
	}

	static ::System::Boolean Method_1_ED098FF851499B2D(::MoleMole::MonoSpawnPoint* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoSpawnPoint*))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_ED098FF851499B2D_OFFSET))(a1);
	}

	static ::System::Collections::Generic::List_1<::Class_2_CCA2F740419298FF_Struct_2_F217B044B82B2397>* Method_1_1B8A8BFE66B17618(::System::Collections::Generic::List_1<::Class_2_CCA2F740419298FF_Struct_2_F217B044B82B2397>* a1, ::System::String* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_CCA2F740419298FF_Struct_2_F217B044B82B2397>*(*)(::System::Collections::Generic::List_1<::Class_2_CCA2F740419298FF_Struct_2_F217B044B82B2397>*, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_1B8A8BFE66B17618_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_9FF0EEFCECD978B9(::MoleMole::MonoSpawnPoint* a1, ::Class_1_92716080D9218E0F_Struct_2_D8F8874821A92FA0& a2)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoSpawnPoint*, ::Class_1_92716080D9218E0F_Struct_2_D8F8874821A92FA0&))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_9FF0EEFCECD978B9_OFFSET))(a1, a2);
	}

	static ::System::Boolean Method_1_A173315A4E1AD8C9(::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>* a1, ::System::Collections::Generic::HashSet_1<::MoleMole::MonoSpawnPoint*>* a2, ::MoleMole::MonoSpawnPoint*& a3)
	{
		return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::MoleMole::MonoSpawnPoint*>*, ::System::Collections::Generic::HashSet_1<::MoleMole::MonoSpawnPoint*>*, ::MoleMole::MonoSpawnPoint*&))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_A173315A4E1AD8C9_OFFSET))(a1, a2, a3);
	}

	static ::System::String* Method_1_99DFEC237ED4D3B7(::UnityEngine::Vector3 a1)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_99DFEC237ED4D3B7_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_A3ABD2C5B5F29E79(::MoleMole::Battle::Entity* a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Boolean(*)(::MoleMole::Battle::Entity*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_A3ABD2C5B5F29E79_OFFSET))(a1, a2, a3);
	}

	static ::System::Boolean Method_1_5B5919AE7ACB305A(::System::String* a1)
	{
		return ((::System::Boolean(*)(::System::String*))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_5B5919AE7ACB305A_OFFSET))(a1);
	}

	static ::System::Boolean Method_1_1FAB1A8E4A51D239(::MoleMole::MonoSpawnPoint* a1, ::MoleMole::MonoSpawnPoint* a2)
	{
		return ((::System::Boolean(*)(::MoleMole::MonoSpawnPoint*, ::MoleMole::MonoSpawnPoint*))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_1FAB1A8E4A51D239_OFFSET))(a1, a2);
	}

	static ::MoleMole::MonoSpawnPoint* Method_1_83DC4F554FEF4C02(::MoleMole::MonoSpawnPoint* a1, ::System::Single a2, ::System::Boolean a3, ::System::Boolean a4)
	{
		return ((::MoleMole::MonoSpawnPoint*(*)(::MoleMole::MonoSpawnPoint*, ::System::Single, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_92716080D9218E0F_METHOD_1_83DC4F554FEF4C02_OFFSET))(a1, a2, a3, a4);
	}
};
