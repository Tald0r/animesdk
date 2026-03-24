#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlexBuffers/FlxMap.h"
#include "unitysdk/FlexBuffers/FlxValue.h"
#include "unitysdk/MoleMole/Config/ReferTargetCoordsOption.h"
#include "unitysdk/Struct_2_4B21424E3D00C7BC.h"
#include "unitysdk/Struct_2_69EDF57FCDC7C5D3.h"
#include "unitysdk/Struct_2_FA5F50563E60AFBA.h"
#include "unitysdk/Struct_2_FC595D1A561D8C6F_1.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/RaycastHit.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_1_236FD73ABC492E3F;
class Class_2_14986121AA61AD99;
class Class_3_F35B080B137ECC46;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::Config { class DynamicString; }
namespace MoleMole::Config { class OffsetGroup; }
namespace MoleMole::Config { class PosRotTargetOption; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROTBYTARGET_OFFSET UNITYSDK_OFFSET(0xEC43430)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROT_OFFSET UNITYSDK_OFFSET(0xEC43090)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_DORAYCASTGROUND_OFFSET UNITYSDK_OFFSET(0xEC46630)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_DRAWPOSROT_OFFSET UNITYSDK_OFFSET(0xEC42BC0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_FROMBINARY_OFFSET UNITYSDK_OFFSET(0xEC47850)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_FROMFLX_OFFSET UNITYSDK_OFFSET(0xEC47D90)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETATTACHPOINT_OFFSET UNITYSDK_OFFSET(0xEC46CF0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETFINALPOSROT_OFFSET UNITYSDK_OFFSET(0xEC45670)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROOTANDRESULT_OFFSET UNITYSDK_OFFSET(0xEC44C50)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTBYTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xEC44840)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTINFO_OFFSET UNITYSDK_OFFSET(0xEC46DD0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_1_OFFSET UNITYSDK_OFFSET(0xEC438C0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_OFFSET UNITYSDK_OFFSET(0xEC42E50)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMBINARY_OFFSET UNITYSDK_OFFSET(0xEC478B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMFLX_OFFSET UNITYSDK_OFFSET(0xEC47E10)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_ISREFERTARGETCAMERA_OFFSET UNITYSDK_OFFSET(0xEC47720)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_RAWGETPOSROOT_OFFSET UNITYSDK_OFFSET(0xEC43FB0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEC476B0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT_TRYGETTARGETENTITY_OFFSET UNITYSDK_OFFSET(0xEC43730)
#define MOLEMOLE_CONFIG_CONFIGPOSROT__CCTOR_OFFSET UNITYSDK_OFFSET(0xEC48DE0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT__CTOR_OFFSET UNITYSDK_OFFSET(0xEC42FF0)
#define MOLEMOLE_CONFIG_CONFIGPOSROT___BASE_TOSTRING_OFFSET UNITYSDK_OFFSET(0xEC48F30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPosRot_TypeDefinitionIndex = 57009;

	class ConfigPosRot : public ::System::Object
	{
	public:
		static ::MoleMole::Config::ConfigPosRot** StaticGet_DEFAULT()
		{
			return (::MoleMole::Config::ConfigPosRot**)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_TypeDefinitionIndex)->GetStaticField(0x42640);
		}
		static ::Struct_2_FC595D1A561D8C6F_1* StaticGet_cachedPosRot()
		{
			return (::Struct_2_FC595D1A561D8C6F_1*)Il2CppClass::FromTypeDefinitionIndex(ConfigPosRot_TypeDefinitionIndex)->GetStaticField(0x102A0);
		}
		// static const ::System::Single DEFAULT_RAYCAST_LENGTH; // 0x0
		::MoleMole::Config::PosRotTargetOption* TargetOption; // 0x10
		::MoleMole::Config::DynamicString* BackupRelativeBaseSavePoint; // 0x18
		::MoleMole::Config::OffsetGroup* Offset; // 0x20
		::MoleMole::Config::DynamicString* RelativeTargetSavePoint; // 0x28
		::MoleMole::Config::DynamicString* RelativeBaseSavePoint; // 0x30
		::MoleMole::Config::DynamicString* BackupRelativeTargetSavePoint; // 0x38
		::System::Single RaycastGroundOffset; // 0x40
		::System::Boolean NeedRaycastGround; // 0x44
		::MoleMole::Config::ReferTargetCoordsOption BackupCoordsOption; // 0x48
		::MoleMole::Config::ReferTargetCoordsOption CoordsOption; // 0x4C
		::UnityEngine::RaycastHit _hitInfo; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT__CCTOR_OFFSET))();
		}

		::System::Void DrawPosRot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_DRAWPOSROT_OFFSET))(this);
		}

		::System::Boolean ChooseEntityPosRot(::Struct_2_FA5F50563E60AFBA actor, ::MoleMole::Config::PosRotTargetOption* targetOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::Struct_2_FA5F50563E60AFBA& targetEntity, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoords, ::System::Boolean& useDefaultTarget, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_14986121AA61AD99* instancedAbility, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::PosRotTargetOption*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::Struct_2_FA5F50563E60AFBA&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::System::Boolean&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROT_OFFSET))(this, actor, targetOption, targetPos, targetRot, targetEntity, targetTrans, targetCoords, useDefaultTarget, caster, other, instancedAbility, forceUseBackUp);
		}

		::System::Boolean ChooseEntityPosRotByTarget(::Struct_2_FA5F50563E60AFBA actor, ::Struct_2_FA5F50563E60AFBA targetEntity, ::MoleMole::Config::PosRotTargetOption* targetOption, ::UnityEngine::Vector3& targetPos, ::UnityEngine::Quaternion& targetRot, ::UnityEngine::Transform*& targetTrans, ::Struct_2_69EDF57FCDC7C5D3& targetCoords, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::MoleMole::Config::PosRotTargetOption*, ::UnityEngine::Vector3&, ::UnityEngine::Quaternion&, ::UnityEngine::Transform*&, ::Struct_2_69EDF57FCDC7C5D3&, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_CHOOSEENTITYPOSROTBYTARGET_OFFSET))(this, actor, targetEntity, targetOption, targetPos, targetRot, targetTrans, targetCoords, instancedAbility);
		}

		::System::Boolean TryGetTargetEntity(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Struct_2_FA5F50563E60AFBA& targetEntity)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Struct_2_FA5F50563E60AFBA&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_TRYGETTARGETENTITY_OFFSET))(this, sourceEntity, caster, other, targetEntity);
		}

		::System::Boolean GetPosRot(::MoleMole::Battle::Entity* sourceEntity, ::Struct_2_FC595D1A561D8C6F_1& posRot, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_FC595D1A561D8C6F_1&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_OFFSET))(this, sourceEntity, posRot, caster, other, instancedAbility);
		}

		::System::Boolean GetPosRot_1(::Struct_2_FA5F50563E60AFBA sourceEntity, ::Struct_2_FC595D1A561D8C6F_1& posRot, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::System::Boolean isUseCachedPosRot, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FC595D1A561D8C6F_1&, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROT_1_OFFSET))(this, sourceEntity, posRot, caster, other, isUseCachedPosRot, instancedAbility);
		}

		::System::Boolean GetPosRotByTargetEntity(::Struct_2_FA5F50563E60AFBA sourceEntity, ::Struct_2_FA5F50563E60AFBA targetEntity, ::Struct_2_FC595D1A561D8C6F_1& posRot, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FC595D1A561D8C6F_1&, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTBYTARGETENTITY_OFFSET))(this, sourceEntity, targetEntity, posRot, instancedAbility);
		}

		::System::Boolean GetPosRootAndResult(::Struct_2_FA5F50563E60AFBA sourceEntity, ::Struct_2_FC595D1A561D8C6F_1& posRot, ::Struct_2_FA5F50563E60AFBA& findTarget, ::System::Boolean& useDefaultTarget, ::UnityEngine::Vector3 changePosVectorValue, ::System::Boolean changePosOffset, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_14986121AA61AD99* instancedAbility, ::System::Boolean isReverseOffsetX, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FC595D1A561D8C6F_1&, ::Struct_2_FA5F50563E60AFBA&, ::System::Boolean&, ::UnityEngine::Vector3, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROOTANDRESULT_OFFSET))(this, sourceEntity, posRot, findTarget, useDefaultTarget, changePosVectorValue, changePosOffset, caster, other, instancedAbility, isReverseOffsetX, forceUseBackUp);
		}

		::System::Boolean RawGetPosRoot(::Struct_2_FA5F50563E60AFBA sourceEntity, ::Struct_2_FC595D1A561D8C6F_1& posRot, ::UnityEngine::Vector3 changePosVectorValue, ::System::Boolean changePosOffset, ::System::Boolean isReverseOffsetX, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::System::Boolean isUseCachedPosRot, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_FA5F50563E60AFBA, ::Struct_2_FC595D1A561D8C6F_1&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::System::Boolean, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_RAWGETPOSROOT_OFFSET))(this, sourceEntity, posRot, changePosVectorValue, changePosOffset, isReverseOffsetX, caster, other, isUseCachedPosRot, instancedAbility);
		}

		::System::Boolean GetFinalPosRot(::MoleMole::Battle::Entity* sourceEntity, ::UnityEngine::Vector3 targetPos, ::UnityEngine::Quaternion targetRot, ::Struct_2_69EDF57FCDC7C5D3 targetCoords, ::Struct_2_FC595D1A561D8C6F_1& posRot, ::UnityEngine::Vector3 changePosVectorValue, ::System::Boolean changePosOffset, ::System::Boolean useDefaultTarget, ::System::Boolean isReverseOffsetX, ::System::Boolean isUseCachedPosRot)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::Struct_2_69EDF57FCDC7C5D3, ::Struct_2_FC595D1A561D8C6F_1&, ::UnityEngine::Vector3, ::System::Boolean, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETFINALPOSROT_OFFSET))(this, sourceEntity, targetPos, targetRot, targetCoords, posRot, changePosVectorValue, changePosOffset, useDefaultTarget, isReverseOffsetX, isUseCachedPosRot);
		}

		::System::Boolean DoRayCastGround(::Class_3_F35B080B137ECC46* sourceEntityModel, ::UnityEngine::Vector3 startPos, ::System::Single& raycastY)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_3_F35B080B137ECC46*, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_DORAYCASTGROUND_OFFSET))(this, sourceEntityModel, startPos, raycastY);
		}

		::UnityEngine::Transform* GetAttachPoint(::MoleMole::Battle::Entity* sourceEntity)
		{
			return ((::UnityEngine::Transform*(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETATTACHPOINT_OFFSET))(this, sourceEntity);
		}

		::System::Boolean GetPosRotInfo(::MoleMole::Battle::Entity* actor, ::Struct_2_4B21424E3D00C7BC& posRotInfo, ::Class_2_14986121AA61AD99* instancedAbility)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::Struct_2_4B21424E3D00C7BC&, ::Class_2_14986121AA61AD99*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_GETPOSROTINFO_OFFSET))(this, actor, posRotInfo, instancedAbility);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_TOSTRING_OFFSET))(this);
		}

		::System::Boolean IsReferTargetCamera(::MoleMole::Battle::Entity* sourceEntity, ::MoleMole::Battle::Entity* caster, ::MoleMole::Battle::Entity* other, ::Class_2_14986121AA61AD99* instancedAbility, ::System::Boolean forceUseBackUp)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::MoleMole::Battle::Entity*, ::Class_2_14986121AA61AD99*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_ISREFERTARGETCAMERA_OFFSET))(this, sourceEntity, caster, other, instancedAbility, forceUseBackUp);
		}

		::System::Boolean FromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_FROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean InternalFromBinary(::Class_1_236FD73ABC492E3F* byteArray, ::System::Int32 threadFlag)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_236FD73ABC492E3F*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMBINARY_OFFSET))(this, byteArray, threadFlag);
		}

		::System::Boolean FromFlx(::FlexBuffers::FlxValue node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxValue))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_FROMFLX_OFFSET))(this, node);
		}

		::System::Boolean InternalFromFlx(::FlexBuffers::FlxMap node)
		{
			return ((::System::Boolean(*)(::PVOID, ::FlexBuffers::FlxMap))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT_INTERNALFROMFLX_OFFSET))(this, node);
		}

		::System::String* __base_ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPOSROT___BASE_TOSTRING_OFFSET))(this);
		}
	};
}
