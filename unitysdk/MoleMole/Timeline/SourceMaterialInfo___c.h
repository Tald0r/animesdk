#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/Generic/KeyValuePair_2.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Timeline { class FloatRecorderUnit; }
namespace MoleMole::Timeline { class KeyframeMBP; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AB59D60)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB59DA0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__SETKEYWORDS_B__25_0_OFFSET UNITYSDK_OFFSET(0x1AB59DB0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__SETKEYWORDS_B__25_1_OFFSET UNITYSDK_OFFSET(0x1AB59DD0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__SETKEYWORDS_B__26_0_OFFSET UNITYSDK_OFFSET(0x1AB59DF0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__SETKEYWORDS_B__26_1_OFFSET UNITYSDK_OFFSET(0x1AB59E40)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SourceMaterialInfo___c_TypeDefinitionIndex = 29165;

	class SourceMaterialInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::Single>** StaticGet___9__26_1()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x22790);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>** StaticGet___9__25_1()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x22798);
		}
		static ::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::MoleMole::Timeline::FloatRecorderUnit*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x227A0);
		}
		static ::MoleMole::Timeline::SourceMaterialInfo___c** StaticGet___9()
		{
			return (::MoleMole::Timeline::SourceMaterialInfo___c**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x227A8);
		}
		static ::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::String*>** StaticGet___9__26_0()
		{
			return (::System::Func_2<::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(SourceMaterialInfo___c_TypeDefinitionIndex)->GetStaticField(0x227B0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__CTOR_OFFSET))(this);
		}

		::System::String* _SetKeyWords_b__25_0(::MoleMole::Timeline::FloatRecorderUnit* config)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__SETKEYWORDS_B__25_0_OFFSET))(this, config);
		}

		::System::Single _SetKeyWords_b__25_1(::MoleMole::Timeline::FloatRecorderUnit* config)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Timeline::FloatRecorderUnit*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__SETKEYWORDS_B__25_1_OFFSET))(this, config);
		}

		::System::String* _SetKeyWords_b__26_0(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*> keyFrame)
		{
			return ((::System::String*(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__SETKEYWORDS_B__26_0_OFFSET))(this, keyFrame);
		}

		::System::Single _SetKeyWords_b__26_1(::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*> keyFrame)
		{
			return ((::System::Single(*)(::PVOID, ::System::Collections::Generic::KeyValuePair_2<::System::String*, ::MoleMole::Timeline::KeyframeMBP*>))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALINFO___C__SETKEYWORDS_B__26_1_OFFSET))(this, keyFrame);
		}
	};
}
