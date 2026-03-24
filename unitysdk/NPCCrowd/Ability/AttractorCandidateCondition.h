#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/StateTreeCore/StateTreeConditionBase.h"
#include "unitysdk/StateTreeCore/StateTreeConditionEvaluationMode.h"
#include "unitysdk/StateTreeCore/StateTreeConditionOperand.h"
#include "unitysdk/StateTreeCore/StateTreeExternalDataHandle_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"
#include "unitysdk/UnrealTypes/DataValidationResult.h"

namespace NPCCrowd::Ability { class VirtualProxy_AttractorCandidateCondition; }
namespace UnrealTypes { class ScriptStruct; }
namespace UnrealTypes { class Struct; }
namespace UnrealTypes { class StructOpsTraitsBase; }

#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COMPILE_OFFSET UNITYSDK_OFFSET(0x76CAC70)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x2F2490)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COPYCREATE_OFFSET UNITYSDK_OFFSET(0x2F2440)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_CREATE_OFFSET UNITYSDK_OFFSET(0x76CB5A0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_DEFAULTCREATE_OFFSET UNITYSDK_OFFSET(0x333350)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2613F0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GETINSTANCEDATATYPE_OFFSET UNITYSDK_OFFSET(0x76CADE0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x2F2260)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x2F20E0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x2F2160)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x2F2360)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x2F22E0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_NAME_OFFSET UNITYSDK_OFFSET(0x2F21E0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_OPERAND_OFFSET UNITYSDK_OFFSET(0x2F2060)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STATICSTRUCT_OFFSET UNITYSDK_OFFSET(0x332FB0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STRUCTOPSTRAITS_OFFSET UNITYSDK_OFFSET(0x333370)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x2F1F70)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_VIRTUALPROXY_OFFSET UNITYSDK_OFFSET(0x332FA0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_LINK_OFFSET UNITYSDK_OFFSET(0x76CACE0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_MOVEASSIGN_OFFSET UNITYSDK_OFFSET(0x2F2490)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_MOVECREATE_OFFSET UNITYSDK_OFFSET(0x2F2440)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_RESET_OFFSET UNITYSDK_OFFSET(0x2F24D0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_BINDINGSBATCH_OFFSET UNITYSDK_OFFSET(0x3331D0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_DELTAINDENT_OFFSET UNITYSDK_OFFSET(0x333080)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_EVALUATIONMODE_OFFSET UNITYSDK_OFFSET(0x3330F0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_INSTANCEDATAHANDLE_OFFSET UNITYSDK_OFFSET(0x3332B0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x333240)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_NAME_OFFSET UNITYSDK_OFFSET(0x333160)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_OPERAND_OFFSET UNITYSDK_OFFSET(0x333010)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_TYPEINFO_OFFSET UNITYSDK_OFFSET(0x332F30)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_TESTCONDITION_OFFSET UNITYSDK_OFFSET(0x76CAEA0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__COPYASSIGN_OFFSET UNITYSDK_OFFSET(0x3333D0)
#define NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__CCTOR_OFFSET UNITYSDK_OFFSET(0x76CBA10)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int AttractorCandidateCondition_TypeDefinitionIndex = 39348;

	struct alignas(4) AttractorCandidateCondition
	{
		static ::UnrealTypes::StructOpsTraitsBase** StaticGet_StaticStructOpsTraits()
		{
			return (::UnrealTypes::StructOpsTraitsBase**)Il2CppClass::FromTypeDefinitionIndex(AttractorCandidateCondition_TypeDefinitionIndex)->GetStaticField(0x47AC0);
		}
		// static const ::System::UInt32 PersistentTypeHash = 0x21AF8EF9; // 0x0
		::StateTreeCore::StateTreeConditionBase Base; // 0x10
		::StateTreeCore::StateTreeExternalDataHandle_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> attractorDataHandle; // 0x2C

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__CCTOR_OFFSET))();
		}

		/*
		static ::UnrealTypes::DataValidationResult Compile(::NPCCrowd::Ability::AttractorCandidateCondition& self, ::StateTreeCore::StateTreeDataView instanceDataView)
		{
			return ((::UnrealTypes::DataValidationResult(*)(::NPCCrowd::Ability::AttractorCandidateCondition&, ::StateTreeCore::StateTreeDataView))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COMPILE_OFFSET))(self, instanceDataView);
		}
		*/

		/*
		static ::System::Boolean Link(::NPCCrowd::Ability::AttractorCandidateCondition& self, ::StateTreeCore::StateTreeLinker& linker)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorCandidateCondition&, ::StateTreeCore::StateTreeLinker&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_LINK_OFFSET))(self, linker);
		}
		*/

		/*
		static ::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*> GetInstanceDataType(::NPCCrowd::Ability::AttractorCandidateCondition& self)
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::Struct*>(*)(::NPCCrowd::Ability::AttractorCandidateCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GETINSTANCEDATATYPE_OFFSET))(self);
		}
		*/

		/*
		static ::System::Boolean TestCondition(::NPCCrowd::Ability::AttractorCandidateCondition& self, ::StateTreeCore::StateTreeExecutionContext& context)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::AttractorCandidateCondition&, ::StateTreeCore::StateTreeExecutionContext&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_TESTCONDITION_OFFSET))(self, context);
		}
		*/

		/*
		::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> get_TypeInfo()
		{
			return ((::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_TYPEINFO_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_TypeInfo(::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*> value)
		{
			return ((::System::Void(*)(::PVOID, ::UnrealTypes::TObjectHandle_1<::UnrealTypes::ScriptStruct*>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_TYPEINFO_OFFSET))(this, value);
		}
		*/

		::NPCCrowd::Ability::VirtualProxy_AttractorCandidateCondition* get_VirtualProxy()
		{
			return ((::NPCCrowd::Ability::VirtualProxy_AttractorCandidateCondition*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_VIRTUALPROXY_OFFSET))(this);
		}

		::UnrealTypes::ScriptStruct* get_StaticStruct()
		{
			return ((::UnrealTypes::ScriptStruct*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STATICSTRUCT_OFFSET))(this);
		}

		::StateTreeCore::StateTreeConditionOperand get_Operand()
		{
			return ((::StateTreeCore::StateTreeConditionOperand(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_OPERAND_OFFSET))(this);
		}

		::System::Void set_Operand(::StateTreeCore::StateTreeConditionOperand value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionOperand))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_OPERAND_OFFSET))(this, value);
		}

		::System::SByte get_DeltaIndent()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_DELTAINDENT_OFFSET))(this);
		}

		::System::Void set_DeltaIndent(::System::SByte value)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_DELTAINDENT_OFFSET))(this, value);
		}

		::StateTreeCore::StateTreeConditionEvaluationMode get_EvaluationMode()
		{
			return ((::StateTreeCore::StateTreeConditionEvaluationMode(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_EVALUATIONMODE_OFFSET))(this);
		}

		::System::Void set_EvaluationMode(::StateTreeCore::StateTreeConditionEvaluationMode value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeConditionEvaluationMode))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_EVALUATIONMODE_OFFSET))(this, value);
		}

		/*
		::Foundation::Unreal::FName get_Name()
		{
			return ((::Foundation::Unreal::FName(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_NAME_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_Name(::Foundation::Unreal::FName value)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::Unreal::FName))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_NAME_OFFSET))(this, value);
		}
		*/

		::System::UInt16 get_BindingsBatch()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_BINDINGSBATCH_OFFSET))(this);
		}

		::System::Void set_BindingsBatch(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_BINDINGSBATCH_OFFSET))(this, value);
		}

		::System::UInt16 get_InstanceTemplateIndex()
		{
			return ((::System::UInt16(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_INSTANCETEMPLATEINDEX_OFFSET))(this);
		}

		::System::Void set_InstanceTemplateIndex(::System::UInt16 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_INSTANCETEMPLATEINDEX_OFFSET))(this, value);
		}

		/*
		::StateTreeCore::StateTreeDataHandle get_InstanceDataHandle()
		{
			return ((::StateTreeCore::StateTreeDataHandle(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_INSTANCEDATAHANDLE_OFFSET))(this);
		}
		*/

		/*
		::System::Void set_InstanceDataHandle(::StateTreeCore::StateTreeDataHandle value)
		{
			return ((::System::Void(*)(::PVOID, ::StateTreeCore::StateTreeDataHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_SET_INSTANCEDATAHANDLE_OFFSET))(this, value);
		}
		*/

		static ::NPCCrowd::Ability::AttractorCandidateCondition Create()
		{
			return ((::NPCCrowd::Ability::AttractorCandidateCondition(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_CREATE_OFFSET))();
		}

		::NPCCrowd::Ability::AttractorCandidateCondition DefaultCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorCandidateCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_DEFAULTCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorCandidateCondition CopyCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorCandidateCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COPYCREATE_OFFSET))(this, allocator);
		}

		::NPCCrowd::Ability::AttractorCandidateCondition MoveCreate(::Unity::Collections::Allocator allocator)
		{
			return ((::NPCCrowd::Ability::AttractorCandidateCondition(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_MOVECREATE_OFFSET))(this, allocator);
		}

		::System::Void CopyAssign(::NPCCrowd::Ability::AttractorCandidateCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorCandidateCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_COPYASSIGN_OFFSET))(this, other);
		}

		::System::Void MoveAssign(::NPCCrowd::Ability::AttractorCandidateCondition& temp)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorCandidateCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_MOVEASSIGN_OFFSET))(this, temp);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_RESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_DISPOSE_OFFSET))(this);
		}

		::UnrealTypes::StructOpsTraitsBase* get_StructOpsTraits()
		{
			return ((::UnrealTypes::StructOpsTraitsBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_GET_STRUCTOPSTRAITS_OFFSET))(this);
		}

		::System::Void UnrealTypes_IStruct_NPCCrowd_Ability_AttractorCandidateCondition__CopyAssign(::NPCCrowd::Ability::AttractorCandidateCondition& other)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::AttractorCandidateCondition&))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION_UNREALTYPES_ISTRUCT_NPCCROWD_ABILITY_ATTRACTORCANDIDATECONDITION__COPYASSIGN_OFFSET))(this, other);
		}
	};
}
