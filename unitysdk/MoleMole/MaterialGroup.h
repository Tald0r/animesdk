#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace MoleMole { class MaterialGroup_RendererMaterials; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Renderer; }
namespace UnityEngine { class Shader; }

#define MOLEMOLE_MATERIALGROUP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7A7CFA0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_128774387667156B_OFFSET UNITYSDK_OFFSET(0x7A7EE10)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_1A5AA449A88E439B_OFFSET UNITYSDK_OFFSET(0x7A7E130)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_448D681F941AC0C7_OFFSET UNITYSDK_OFFSET(0x7A7EB20)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_51B9C64C69C57DB4_OFFSET UNITYSDK_OFFSET(0x7A7EA90)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_53710757CEBC23D3_OFFSET UNITYSDK_OFFSET(0x7A7E650)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_68B853BDAE85D2AF_OFFSET UNITYSDK_OFFSET(0x7A7E490)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_6BA6F9DEB121DE8F_OFFSET UNITYSDK_OFFSET(0x7A7E7D0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_6EEC9BD778F98414_OFFSET UNITYSDK_OFFSET(0x7A7D3A0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_73848A1A591EE38C_OFFSET UNITYSDK_OFFSET(0x7A7DB60)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_816ED7FC0A7FCCD1_OFFSET UNITYSDK_OFFSET(0x7A7E2A0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_9B1F2653496E5C47_OFFSET UNITYSDK_OFFSET(0x7A7D030)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_C3F5B006C922A2D1_OFFSET UNITYSDK_OFFSET(0x7A7D690)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x7A7ED10)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_DA3A9E7E08E62787_OFFSET UNITYSDK_OFFSET(0x7A7DBE0)
#define MOLEMOLE_MATERIALGROUP_METHOD_1_E866E78CAA8884E1_OFFSET UNITYSDK_OFFSET(0x7A7ED80)
#define MOLEMOLE_MATERIALGROUP_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7A7CF20)
#define MOLEMOLE_MATERIALGROUP__CCTOR_OFFSET UNITYSDK_OFFSET(0x7A7D370)
#define MOLEMOLE_MATERIALGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x7A7CEE0)

namespace MoleMole
{
	inline static constexpr unsigned int MaterialGroup_TypeDefinitionIndex = 78793;

	class MaterialGroup : public ::System::Object
	{
	public:
		static ::Il2CppArray<::MoleMole::MaterialGroup_RendererMaterials*>** StaticGet_EMPTY_RENDERER_MATERIALS()
		{
			return (::Il2CppArray<::MoleMole::MaterialGroup_RendererMaterials*>**)Il2CppClass::FromTypeDefinitionIndex(MaterialGroup_TypeDefinitionIndex)->GetStaticField(0x46D20);
		}
		::Il2CppArray<::MoleMole::MaterialGroup_RendererMaterials*>* entries; // 0x10
		::Il2CppArray<::UnityEngine::Material*>* allInstancedMats; // 0x18
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Tuple_2<::UnityEngine::Renderer*, ::System::Int32>*>* matInfos; // 0x20
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* matOriginalShaders; // 0x28
		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::System::Tuple_2<::UnityEngine::Renderer*, ::System::Int32>*>* _materialInfos; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP__CCTOR_OFFSET))();
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_TOSTRING_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_DISPOSE_OFFSET))(this);
		}

		::System::Void Method_1_6EEC9BD778F98414(::Il2CppArray<::UnityEngine::Material*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_6EEC9BD778F98414_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_1_C3F5B006C922A2D1()
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_C3F5B006C922A2D1_OFFSET))(this);
		}

		::System::Void Method_1_DA3A9E7E08E62787(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_DA3A9E7E08E62787_OFFSET))(this, a1);
		}

		::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Renderer*, ::System::Int32> Method_1_1A5AA449A88E439B(::UnityEngine::Material* a1)
		{
			return ((::System::ValueTuple_3<::System::Boolean, ::UnityEngine::Renderer*, ::System::Int32>(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_1A5AA449A88E439B_OFFSET))(this, a1);
		}

		::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>* Method_1_73848A1A591EE38C()
		{
			return ((::System::Collections::Generic::Dictionary_2<::UnityEngine::Material*, ::UnityEngine::Shader*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_73848A1A591EE38C_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Material*>* Method_1_68B853BDAE85D2AF(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_68B853BDAE85D2AF_OFFSET))(this, a1);
		}

		::System::Void Method_1_53710757CEBC23D3(::Il2CppArray<::UnityEngine::Renderer*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Renderer*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_53710757CEBC23D3_OFFSET))(this, a1);
		}

		::MoleMole::MaterialGroup* Method_1_6BA6F9DEB121DE8F()
		{
			return ((::MoleMole::MaterialGroup*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_6BA6F9DEB121DE8F_OFFSET))(this);
		}

		::System::Void Method_1_816ED7FC0A7FCCD1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_816ED7FC0A7FCCD1_OFFSET))(this);
		}

		::System::Void Method_1_51B9C64C69C57DB4(::UnityEngine::Shader* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Shader*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_51B9C64C69C57DB4_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_448D681F941AC0C7(::System::Int32 a1, ::System::Collections::Generic::List_1<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_448D681F941AC0C7_OFFSET))(this, a1, a2);
		}

		::System::Void Method_1_9B1F2653496E5C47()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_9B1F2653496E5C47_OFFSET))(this);
		}

		::System::Void Method_1_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_1_E866E78CAA8884E1(::System::String* a1, ::Il2CppArray<::UnityEngine::Material*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Il2CppArray<::UnityEngine::Material*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_E866E78CAA8884E1_OFFSET))(this, a1, a2);
		}

		::System::String* Method_1_128774387667156B()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_MATERIALGROUP_METHOD_1_128774387667156B_OFFSET))(this);
		}
	};
}
