#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/Config/MonsterFunctionType.h"
#include "unitysdk/MoleMole/Config/RuntimeDynamicObjectSet.h"
#include "unitysdk/MoleMole/Config/SceneConfigRuntimeDataArea.h"
#include "unitysdk/Struct_2_FAFA459B9E6E8CB0.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_01E3578B80D3E1F9;
class Class_1_236FD73ABC492E3F;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class SceneMapLayerRuntimeData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x13FA3C20)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMFLX_OFFSET UNITYSDK_OFFSET(0x13FA30B0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURAREANAME_OFFSET UNITYSDK_OFFSET(0x13FA4070)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTAREA_OFFSET UNITYSDK_OFFSET(0x13FA40E0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTBATTLEREGIONINDEX_OFFSET UNITYSDK_OFFSET(0x13FA4130)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_TOTALAREACOUNT_OFFSET UNITYSDK_OFFSET(0x13FA4150)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_0BD393E566CD3D4A_OFFSET UNITYSDK_OFFSET(0x13FA3130)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_3522061D06F0BCC2_OFFSET UNITYSDK_OFFSET(0x13FA4460)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_4C149FCF039BA7FB_OFFSET UNITYSDK_OFFSET(0x13FA3C80)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_B251B885D9845DC7_OFFSET UNITYSDK_OFFSET(0x13FA51B0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_BC4278C2777D6ADF_OFFSET UNITYSDK_OFFSET(0x13FA42D0)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_E2A73E58C000BBB9_OFFSET UNITYSDK_OFFSET(0x13FA4750)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_EA0BA3E4AF50C583_OFFSET UNITYSDK_OFFSET(0x13FA4990)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_SET_CURRENTAREA_OFFSET UNITYSDK_OFFSET(0x13FA4110)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_SET_CURRENTBATTLEREGIONINDEX_OFFSET UNITYSDK_OFFSET(0x13FA4140)
#define MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x13FA41C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SceneConfigRuntimeData_TypeDefinitionIndex = 41825;

	class SceneConfigRuntimeData : public ::System::Object
	{
	public:
		::System::String* sceneNameId; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* sceneAreas; // 0x18
		::System::Collections::Generic::List_1<::Class_1_01E3578B80D3E1F9*>* areaCategoryList; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::RuntimeDynamicObjectSet>* dynamicObjectSets; // 0x28
		::System::Collections::Generic::List_1<::MoleMole::Config::SceneMapLayerRuntimeData*>* mapLayers; // 0x30
		::System::Collections::Generic::List_1<::Struct_2_FAFA459B9E6E8CB0>* navMeshLinks; // 0x38
		::MoleMole::Config::SceneConfigRuntimeDataArea _CurrentArea_k__BackingField; // 0x40
		::System::Int32 _CurrentBattleRegionIndex_k__BackingField; // 0x78
		::System::Single _lazyCheck; // 0x7C
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::EntityType, ::System::Int32>*>* statis; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::MoleMole::Config::MonsterFunctionType, ::System::Int32>*>* monstStatis; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMFLX_OFFSET))(this, a1);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_FROMBINARY_OFFSET))(this, a1, a2);
		}

		::System::String* get_CurAreaName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURAREANAME_OFFSET))(this);
		}

		::MoleMole::Config::SceneConfigRuntimeDataArea get_CurrentArea()
		{
			return ((::MoleMole::Config::SceneConfigRuntimeDataArea(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTAREA_OFFSET))(this);
		}

		::System::Void set_CurrentArea(::MoleMole::Config::SceneConfigRuntimeDataArea a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::SceneConfigRuntimeDataArea))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_SET_CURRENTAREA_OFFSET))(this, a1);
		}

		::System::Int32 get_CurrentBattleRegionIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_CURRENTBATTLEREGIONINDEX_OFFSET))(this);
		}

		::System::Void set_CurrentBattleRegionIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_SET_CURRENTBATTLEREGIONINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_TotalAreaCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_GET_TOTALAREACOUNT_OFFSET))(this);
		}

		::System::Boolean Method_1_BC4278C2777D6ADF(::MoleMole::Battle::Entity* a1, ::System::Boolean a2, ::MoleMole::Config::SceneConfigRuntimeDataArea& a3, ::System::Int32& a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::System::Boolean, ::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_BC4278C2777D6ADF_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean Method_1_E2A73E58C000BBB9(::System::String* a1, ::MoleMole::Config::SceneConfigRuntimeDataArea& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::MoleMole::Config::SceneConfigRuntimeDataArea&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_E2A73E58C000BBB9_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_EA0BA3E4AF50C583()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_EA0BA3E4AF50C583_OFFSET))(this);
		}

		static ::System::ValueTuple_2<::System::Boolean, ::MoleMole::Config::SceneConfigRuntimeDataArea> Method_1_B251B885D9845DC7(::System::Nullable_1<::UnityEngine::Vector3> a1, ::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>* a2, ::System::Byte a3)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::MoleMole::Config::SceneConfigRuntimeDataArea>(*)(::System::Nullable_1<::UnityEngine::Vector3>, ::System::Collections::Generic::List_1<::MoleMole::Config::SceneConfigRuntimeDataArea>*, ::System::Byte))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_B251B885D9845DC7_OFFSET))(a1, a2, a3);
		}

		::System::Boolean Method_1_3522061D06F0BCC2(::UnityEngine::Vector3 a1, ::MoleMole::Config::SceneConfigRuntimeDataArea& a2, ::System::Int32& a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::MoleMole::Config::SceneConfigRuntimeDataArea&, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_3522061D06F0BCC2_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean Method_1_4C149FCF039BA7FB(::Class_1_236FD73ABC492E3F* a1, ::System::Int32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_4C149FCF039BA7FB_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_1_0BD393E566CD3D4A(::FlexBuffers::FlxMap a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SCENECONFIGRUNTIMEDATA_METHOD_1_0BD393E566CD3D4A_OFFSET))(this, a1);
		}
	};
}
