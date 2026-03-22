#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class ColorRecorderUnit; }
namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace MoleMole::Timeline { class TextureRecorderUnit; }
namespace MoleMole::Timeline { class Vector4RecorderUnit; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_070D9D48ED3CA45F_OFFSET UNITYSDK_OFFSET(0xD37D650)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_1E701B763C6ADC83_OFFSET UNITYSDK_OFFSET(0xD37D6C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_47DF2CDCC9D476BE_OFFSET UNITYSDK_OFFSET(0xD37D5C0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_4B96FF7EBA86283C_OFFSET UNITYSDK_OFFSET(0xD37D6A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_4D005F40FA785E76_OFFSET UNITYSDK_OFFSET(0xD37D680)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_57D8E60B57A87C4F_OFFSET UNITYSDK_OFFSET(0xD37D600)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_7193E7A2B60D78BE_OFFSET UNITYSDK_OFFSET(0xD37D5E0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_B8D7B61530203092_OFFSET UNITYSDK_OFFSET(0xD37D5A0)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xD37D550)
#define MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xD37D590)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int RuntimeMaterialInfo___c_TypeDefinitionIndex = 73535;

	class RuntimeMaterialInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::MoleMole::Timeline::Vector4RecorderUnit*, ::System::Int32>** StaticGet___9__34_3()
		{
			return (::System::Func_2<::MoleMole::Timeline::Vector4RecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x322E0);
		}
		static ::MoleMole::Timeline::RuntimeMaterialInfo___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::RuntimeMaterialInfo___c**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x322E8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::String*>** StaticGet___9__40_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x322F0);
		}
		static ::System::Func_2<::MoleMole::Timeline::ColorRecorderUnit*, ::System::Int32>** StaticGet___9__34_2()
		{
			return (::System::Func_2<::MoleMole::Timeline::ColorRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x322F8);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>** StaticGet___9__39_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x32300);
		}
		static ::System::Func_2<::MoleMole::Timeline::TextureRecorderUnit*, ::System::Int32>** StaticGet___9__34_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::TextureRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x32308);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Int32>** StaticGet___9__34_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x32310);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>** StaticGet___9__39_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x32318);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::Single>** StaticGet___9__40_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(RuntimeMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x32320);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C__CTOR_OFFSET))(this);
		}

		::System::String* Method_1_B8D7B61530203092(::MoleMole::Timeline::FloatRecorderUnit* a1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_B8D7B61530203092_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_47DF2CDCC9D476BE(::MoleMole::Timeline::TextureRecorderUnit* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::TextureRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_47DF2CDCC9D476BE_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_7193E7A2B60D78BE(::MoleMole::Timeline::ColorRecorderUnit* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::ColorRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_7193E7A2B60D78BE_OFFSET))(this, a1);
		}

		::System::String* Method_1_57D8E60B57A87C4F(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*> a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_57D8E60B57A87C4F_OFFSET))(this, a1);
		}

		::System::Single Method_1_070D9D48ED3CA45F(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*> a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_070D9D48ED3CA45F_OFFSET))(this, a1);
		}

		::System::Single Method_1_4D005F40FA785E76(::MoleMole::Timeline::FloatRecorderUnit* a1)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_4D005F40FA785E76_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_4B96FF7EBA86283C(::MoleMole::Timeline::Vector4RecorderUnit* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::Vector4RecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_4B96FF7EBA86283C_OFFSET))(this, a1);
		}

		::System::Int32 Method_1_1E701B763C6ADC83(::MoleMole::Timeline::FloatRecorderUnit* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_RUNTIMEMATERIALINFO___C_METHOD_1_1E701B763C6ADC83_OFFSET))(this, a1);
		}
	};
}
