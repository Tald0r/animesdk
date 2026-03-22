#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace BehaviorDesigner::Runtime { class PrecompiledTypeDeserializer; }
namespace BehaviorDesigner::Runtime { template <typename T1, typename T2> class PrecompiledTypeDeserializationDatabase_Pair_2; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_METHOD_1_0B206AC30195F29C_OFFSET UNITYSDK_OFFSET(0x17DBAFA0)
#define MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_METHOD_1_DA71589C0E4CC972_OFFSET UNITYSDK_OFFSET(0x17DBAF80)
#define MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_SETPRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZER_OFFSET UNITYSDK_OFFSET(0x17DBAF00)

namespace MoleMole::BehaviorTreeDeserialization
{
	inline static constexpr unsigned int PrecompiledTypeDeserializationDatabaseInitialization_TypeDefinitionIndex = 80803;

	class PrecompiledTypeDeserializationDatabaseInitialization : public ::System::Object
	{
	public:
		static ::System::Void SetPrecompiledTypeDeserializationDatabaseInitializer()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_SETPRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZER_OFFSET))();
		}

		static ::System::Void Method_1_DA71589C0E4CC972(::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_Pair_2<::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*, ::System::Func_1<::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*>*>*& a1)
		{
			return ((::System::Void(*)(::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_Pair_2<::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*, ::System::Func_1<::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*>*>*&))((::PBYTE)hIl2Cpp + MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_METHOD_1_DA71589C0E4CC972_OFFSET))(a1);
		}

		static ::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_Pair_2<::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*, ::System::Func_1<::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*>*>* Method_1_0B206AC30195F29C()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::String*, ::BehaviorDesigner::Runtime::PrecompiledTypeDeserializationDatabase_Pair_2<::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*, ::System::Func_1<::BehaviorDesigner::Runtime::PrecompiledTypeDeserializer*>*>*>*(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_BEHAVIORTREEDESERIALIZATION_PRECOMPILEDTYPEDESERIALIZATIONDATABASEINITIALIZATION_METHOD_1_0B206AC30195F29C_OFFSET))();
		}
	};
}
